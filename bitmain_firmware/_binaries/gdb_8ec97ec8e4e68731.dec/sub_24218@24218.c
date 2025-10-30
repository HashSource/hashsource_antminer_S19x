unsigned int *__fastcall sub_24218(int a1)
{
  unsigned int *v2; // r5
  int v3; // r0
  int v4; // r4
  int v5; // r0
  int v6; // r0
  int v7; // r1

  v2 = (unsigned int *)sub_15D27C(16);
  v2[3] = sub_250C50(a1);
  sub_240E0(a1, v2);
  v3 = sub_15ECAC(a1, v2[2]);
  if ( v3 )
  {
    v4 = 0;
    *v2 = v2[1] + v3;
    while ( 1 )
    {
      v5 = sub_15ECB4(a1);
      if ( v4 >= ((int (__fastcall *)(int))loc_166E9C)(v5) )
        break;
      v6 = sub_250C78(v2[3], v4);
      v7 = 16 * v4++;
      if ( v6 )
        *(_QWORD *)(v2[3] + v7) += *v2;
    }
  }
  return v2;
}
