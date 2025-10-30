int __fastcall sub_1DDBE4(int a1, int a2, int a3)
{
  int *v3; // r4
  int *v4; // r6
  _DWORD *v5; // r4
  void *v6; // r0
  void *v7; // r0
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r2
  int result; // r0
  int v12[4]; // [sp+4h] [bp+0h] BYREF
  int v13[3]; // [sp+14h] [bp+10h] BYREF

  v3 = (int *)dword_4886C8;
  v12[0] = a1;
  v12[1] = a2;
  v12[2] = a3;
  if ( dword_4886C8 )
  {
    v4 = &dword_4886C8;
    do
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v3[1] + 24);
        v10 = *(_DWORD *)(v3[1] + 28);
        v13[0] = *(_DWORD *)(v3[1] + 20);
        v13[1] = v9;
        v13[2] = v10;
        if ( sub_9904C(v13, v12) )
          break;
        v4 = v3;
        v3 = (int *)*v3;
        if ( !v3 )
          goto LABEL_13;
      }
      v5 = (_DWORD *)v3[1];
      if ( v5 )
      {
        v6 = (void *)v5[2];
        if ( v6 )
          free(v6);
        v7 = (void *)v5[3];
        if ( v7 )
          free(v7);
        sub_33AC04(v5);
      }
      v8 = (_DWORD *)*v4;
      *v4 = *(_DWORD *)*v4;
      sub_339E64(v8);
      v3 = (int *)*v4;
    }
    while ( *v4 );
  }
LABEL_13:
  if ( sub_9904C(dword_4886D4, v12) )
  {
    dword_4886D0 = 0;
    dword_4886D4[0] = dword_475848;
    *(_QWORD *)&dword_4886D4[1] = qword_47584C;
  }
  result = sub_9904C((int *)&qword_4878EC, v12);
  if ( result )
    return sub_15D778();
  return result;
}
