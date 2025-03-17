import { Todo } from '../assets/Todo'
const STORAGE_KEY = 'vue-todolist'

export class Storage {
  static fetch () {
    let todos = JSON.parse(localStorage.getItem(STORAGE_KEY) || '[]')
    todos.forEach(item => item.__proto__ = Todo.prototype)
    return todos
  }

  static save (todos) {
    localStorage.setItem(STORAGE_KEY, JSON.stringify(todos))
  }
}