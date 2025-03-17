import Vue from 'vue'
import App from './App.vue'
import store from './store'

Vue.config.productionTip = false

import 'bootstrap/dist/css/bootstrap.min.css'
import 'bootstrap/dist/js/bootstrap.js'
/* import the fontawesome core */
import { library } from '@fortawesome/fontawesome-svg-core'
 
/* import font awesome icon component */
import { FontAwesomeIcon } from '@fortawesome/vue-fontawesome'
 
/* import all icons, solid图标库的包名为fas、regular图标库的包名为far、brands图标库的包名为fab */
import { fas } from '@fortawesome/free-solid-svg-icons'
// import { far } from '@fortawesome/free-regular-svg-icons'
// import { fab } from '@fortawesome/free-brands-svg-icons'
 
/* add icons to the library */
library.add(fas)
 
/* add font awesome icon component */
Vue.component('font-awesome-icon', FontAwesomeIcon)








new Vue({
  store,
  render: h => h(App)
}).$mount('#app')
