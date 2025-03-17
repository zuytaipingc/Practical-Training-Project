<template>
  <li class="list-group-item d-flex align-items-center">
    <font-awesome-icon class="todo-move pointer" icon="ellipsis-v" size="xs"/>
    <div 
      @click="changeEventHandler" 
      :class="['pointer mx-2 badge rounded-circle border bg-'+todo.color, todo.color=='light' ? 'border-dark' : 'border-'+todo.color]">
      <span class="invisible">*</span>
    </div>
    <div class="d-inline-block text-truncate flex-sm-grow-1 pointer mx-1" :title="todo.content"
      @click="changeEventHandler">{{todo.content}}</div>
    <font-awesome-icon @click="editEventHandler" icon="edit" size="xs" class="mx-2 pointer"/>
    <font-awesome-icon @click="removeEventHandler" icon="times" size="xs" class="pointer"/>
  </li>
</template>

<script>
export default {
  name: 'TodoItem',
  props: { todo: Object },
  methods: {
    removeEventHandler() {
      this.$store.commit('removeTask', this.todo.id)
    },
    editEventHandler() {
      this.$emit('edit');
    },
    changeEventHandler() {
      this.$store.commit('changeState', this.todo.id)
    },
  }
}
</script>
