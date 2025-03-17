<template>
  <div class="modal fade">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-body">
          <div class="d-flex mb-3 justify-content-between">
            <div class="form-check" v-for="(item, index) in options" :key="item.value">
              <input 
                class="form-check-input " 
                type="radio" 
                name="flexRadio" 
                :id="'flexRadio'+index" 
                v-model="todoItem.state" 
                :value="item.value"
              >
              <label class="form-check-label" :for="'flexRadio'+index">{{item.name}}</label>
            </div>
          </div>
          <div class="mb-3">
            <input type="text" class="form-control" v-model="todoItem.content">
          </div>
          <div class="mb-3">
            <textarea class="form-control" rows="3" maxlength="1000" v-model="todoItem.note"></textarea>
          </div>
        </div>

        <div class="modal-footer">
          <button type="button" class="btn btn-secondary" data-bs-dismiss="modal" @click.stop="cancelHandler">Cancel</button>
          <button type="button" class="btn btn-primary" @click.stop="okHandler">OK</button>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import { TaskState } from '../assets/Todo.js'
export default {
  name: 'ModalDialog',
  props: {
    todo: Object
  },
  data() {
    return {
      options: TaskState,
      todoItem: {},
    }
  },
  watch: {
    todo(newVal) {
      this.todoItem = Object.assign({}, newVal)
    }
  },
  computed: {
    todoCopy() {
      return Object.assign({}, this.todo)
    }
  },
  methods: {
    okHandler() {
      this.$store.commit('updateTask', this.todoItem)
      this.$emit('close');
    },
    cancelHandler() {
      // 取消之后，将内容重新恢复为修改之前的内容
      this.todoItem = this.todoCopy
    }
  }
}
</script>
