export const TaskState = [
  { name: 'Todo', value: 0, color: 'light' },
  { name: 'In Progress', value: 1, color: 'warning' },
  { name: 'Done', value: 2, color: 'success' }
]

export class Todo {
  constructor (id, content, state=0, note="") {
    this.id = id
    this.content = content
    this.state = state
    this.note = note
  }

  changeState() {
    switch (this.state) {
      case 0:
        this.state = 1
        break
      case 1:
        this.state = 2
        break
      case 2:
        this.state = 0
        break
    }
  }

  get color() {
    return TaskState.find(item => item.value == this.state).color
  }
}