// TODO : ""
"li x0, 0\n\t"
"li x5, 8\n\t"
"Loop:\n\t"
"vsetvli x6, x5, e16, ta, ma\n\t"
"vle16.v v0, (%[p_x])\n\t"
"lh x7, %[p_x]\n\t"
"addi x6, x6, 2\n\t"
"vle16.v v1, (%[p_tmp1])\n\t"
//"vrgather.vv v1, x7, v1\n\t"
//"vrgather.vv v1, v1, v1\n\t"
"vle16.v v2, (%[p_tmp2])\n\t"
//"vrgather.vv v2, %[target], v2\n\t"
//"vrgather.vv v2, v2, v2\n\t"
"vadd.vv v0, v0, v1\n\t"
"vmseq.vv v1, v0, v2\n\t"

"bnez v1, found_tar\n\t"
"addi x0, x0, 1\n\t"
"bne x0, x5, Loop\n\t"

"found_tar:\n\t"
"li %[flag], 1\n\t"
