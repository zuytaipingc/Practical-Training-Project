<template>
  <div id="app">
    <!-- 固定在顶部 -->
    <div class="container fixed-top pt-4">
      <!-- 添加待办事项 -->
      <form class="input-group mb-3" @submit.prevent="addTask">
        <span class="input-group-text">Todo</span>
        <input type="text" class="form-control" ref="content">
        <button class="btn btn-primary" type="submit">Add</button>
      </form>

      <!-- 筛选项 -->
      <div class="d-flex justify-content-between">
        <div class="form-check" v-for="(item, index) in options" :key="item.value">
          <input class="form-check-input" :id="'flexCheck'+index" type="checkbox" :value="item.value" v-model="filterOption">
          <label class="form-check-label" :for="'flexCheck'+index">
            {{item.name}} <span :class="['py-sm-1 px-sm-1 mx-1 border badge rounded bg-'+item.color, item.color == 'light' ? 'text-dark border-dark' : ' border-'+item.color]">{{todoCounts(item.value)}}</span>
          </label>
        </div>
      </div>
    </div>

    <div class="container pt-5">
      <!-- 任务列表 -->
      <ul class="list-group">
        <!-- handles是拖拽时的作用对象，end是拖拽后触发的函数 -->
        <draggable handle=".todo-move" @end="onDragEnd">
          <todo-item
            v-for="item in filteredTodos"
            :key="item.id"
            :todo="item"
            @edit="editTask(item.id)"></todo-item>
        </draggable>
      </ul>
    </div>

    <!-- 模态框 -->
    <div class="container">
      <modal-dialog 
        data-bs-backdrop="static" 
        data-bs-keyboard="false" 
        tabindex="-1" 
        aria-labelledby="staticBackdropLabel" 
        aria-hidden="true" 
        id="myModal"
        :todo="editingItem"
        @close="closeModal" />
    </div>

  </div>
</template>

<script>
import { Modal } from "bootstrap"
import TodoItem from './components/TodoItem'
import ModalDialog from './components/ModalDialog'
import { TaskState } from './assets/Todo.js'
import draggable from 'vuedraggable'

export default {
  name: 'App',
  components: {
    TodoItem,
    ModalDialog,
    draggable
  },
  data() {
    return {
      myModal: null,
      //任务状态数据
      options: TaskState,
      // 默认选中Todo和InProgress
      filterOption: [TaskState[0].value, TaskState[1].value],
      editingItem: null
    }
  },
  mounted() {
    this.myModal = new Modal(document.getElementById('myModal'));
  },
  computed: {
    filteredTodos() {
      return this.$store.getters.getFilteredTodos(this.filterOption)
    }
  },
  methods: {
    // 拖拽之后，提交此时的顺序
    onDragEnd(e) {
      // 拖拽之前和之后的index没变，就直接return
      if (e.newIndex == e.oldIndex) {
        return
      }
      let params = {
        oldIndex: e.oldIndex,
        newIndex: e.newIndex,
        option: this.filterOption
      }
      //提交到store中
      this.$store.commit('changeOrder', params)
    },
    // 关闭编辑弹框
    closeModal() {
      this.myModal.hide()
    },
    // 点击编辑图标，让其编辑弹框弹出
    editTask(id) {
      // 根据ID获取其任务项
      this.editingItem = this.$store.getters.getTodoById(id)
      this.myModal.show()
    },
    // 添加待办事项数据
    addTask() {
      let content = this.$refs.content;
      // 值为空字符串
      if (!content.value.trim().length) return;
      // 提交mutation
      this.$store.commit('addTask', content.value);
      // 添加完之后，清空输入框的数据
      content.value = ''
    },
    // 获取各状态的任务数量
    todoCounts(state) {
      return this.$store.getters.getTaskCount(state)
    },
  }
}
</script>

<style lang="scss">
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  margin-top: 80px;
}

*, ::after, ::before {
  box-sizing: border-box;
  padding: 0;
  margin: 0;
}

.pointer {
  cursor: pointer;
}

.form-control:focus, .form-check-input:focus {
  box-shadow: none !important;
  border-color: #ced4da !important;
}

.fixed-top {
  background: #fff;
}
</style>
