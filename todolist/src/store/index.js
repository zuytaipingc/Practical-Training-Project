import Vue from 'vue'
import Vuex from 'vuex'
import { Todo } from '../assets/Todo'
import { Storage } from '../assets/localStorage.js'

Vue.use(Vuex)

const todos = Storage.fetch();
const todosCopy = Object.assign([], todos)
const lastId = todosCopy.length === 0 ? 0
  : todosCopy.sort((a, b) => b.id-a.id)[0].id;

const store = new Vuex.Store({
  state: {
    todos: todos,
    lastId: lastId
  },
  getters: {
    // 根据状态过滤列表
    getFilteredTodos: (state) => (stateArray) => {
      if(stateArray.length > 0)
        return state.todos.filter(ele => stateArray.includes(ele.state))
      else
        return state.todos
    },
    //根据ID获取任务
    getTodoById: (state) => (id) => {
      return state.todos.find(v => v.id === id)
    },
    // 获取状态对应的任务数量
    getTaskCount: (state) => (taskState) => {
      return state.todos.filter(el => el.state === taskState).length
    },
  },
  mutations: {
    // 删除任务
    removeTask(state, value) {
      let index = state.todos.findIndex(v => v.id === value)
      state.todos.splice(index, 1)
    },
    // 修改任务
    updateTask(state, value) {
      let item = state.todos.find(v => v.id === value.id)
      Object.assign(item, value)
    },
    // 修改任务状态
    changeState(state, value) {
      let item = state.todos.find(v => v.id === value)
      item.changeState()
    },
    // 添加待办事项
    addTask(state, value) {
      state.lastId++;
      let todo = new Todo(state.lastId, value)
      state.todos.push(todo)
      // 输出添加待办事项后的新数组
      console.log(state.todos)
    },
    // 修改任务顺序
    changeOrder(state, value) {
      let filered = this.getters.getFilteredTodos(value.option)
      let oldItem = filered[value.oldIndex]
      let newItem = filered[value.newIndex]
      let realOldIndex = state.todos.findIndex(v => v.id === oldItem.id)
      let realNewIndex = state.todos.findIndex(v => v.id === newItem.id)
      // 先删除
      state.todos.splice(realOldIndex, 1)
      // 在移动后的位置插入刚删除的那条数据
      state.todos.splice(realNewIndex, 0, oldItem)
    }
  },
  actions: {
  },
  modules: {
  }
})

store.watch(
  state => state.todos,
  value => Storage.save(value),
  { deep: true }
)

export default store