// TODO : 

 "li x5, 16\n\t"
 "vsetvli x6, x5, e16, ta, ma\n\t"
 "vle16.v v0, (%[x])\n\t"
  "vle16.v v1, (%[h])\n\t"
  "vadd.vv v2, v0, v1\n\t"
  "vse16.v v2, (%[y])\n\t"
  "vle16.v v0, (%[x])\n\t"
  "vle16.v v1, (%[h])\n\t"
  "vadd.vv v2, v0, v1\n\t"
  "vse16.v v2, (%[y])\n\t"
  "slli x6, x6, 1\n\t"

  "add %[x], %[x], x6\n\t"
  "add %[y], %[y], x6\n\t"
  "add %[h], %[h], x6\n\t"
 "vle16.v v0, (%[x])\n\t"
  "vle16.v v1, (%[h])\n\t"
  "vadd.vv v2, v0, v1\n\t"
  "vse16.v v2, (%[y])\n\t"
  "vle16.v v0, (%[x])\n\t"
  "vle16.v v1, (%[h])\n\t"
  "vadd.vv v2, v0, v1\n\t"
  "vse16.v v2, (%[y])\n\t"


  "addi %[arith_cnt], %[arith_cnt], 8\n\t"
  "addi %[lw_cnt], %[lw_cnt], 9\n\t"
  "addi %[sw_cnt], %[sw_cnt], 4\n\t"
  "addi %[others_cnt], %[others_cnt], 1\n\t"

