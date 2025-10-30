unsigned int *__fastcall sub_244DC(int a1)
{
  int v2; // r4
  unsigned int *v3; // r5
  int v4; // r0
  int v5; // r0
  int v6; // r1

  v2 = 0;
  v3 = (unsigned int *)sub_15D27C(16);
  v3[3] = sub_250C50(a1);
  sub_240E0(a1, v3);
  *v3 = sub_15ECAC(a1, 13);
  while ( 1 )
  {
    v4 = sub_15ECB4(a1);
    if ( v2 >= ((int (__fastcall *)(int))loc_166E9C)(v4) )
      break;
    v5 = sub_250C78(v3[3], v2);
    v6 = 16 * v2++;
    if ( v5 )
      *(_QWORD *)(v3[3] + v6) += *v3;
  }
  return v3;
}
