int __fastcall sub_186264(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  _DWORD *v6; // r4
  int *v7; // r6
  int v8; // r5
  void *v10; // r8
  int v11; // r7
  int v12; // r0
  int v13; // r7
  int v14; // r9
  int v15; // r10
  int v16; // r4
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // [sp+Ch] [bp-Ch] BYREF
  int v21; // [sp+10h] [bp-8h]
  int v22; // [sp+14h] [bp-4h]

  v20 = a1;
  v21 = a2;
  v22 = a3;
  v5 = ps_getpid_0((int)&v20);
  v6 = (_DWORD *)dword_487944;
  if ( !dword_487944 )
    return 0;
  while ( v5 != v6[1] )
  {
    v6 = (_DWORD *)*v6;
    if ( !v6 )
      return 0;
  }
  v7 = v6 + 3;
  if ( sub_98F78(v6 + 3, &dword_475848) || !sub_98F78(v6 + 3, &v20) )
    return 0;
  v10 = sub_9253C((int)sub_184B5C, (int)v6);
  sub_186194(v6, *v7, v6[4], v6[5]);
  sub_23F9F0(v20, v21, v22);
  if ( a4 != 5 || off_489A24(&dword_4899A0) && (((int (__fastcall *)(_DWORD))loc_16AB28)(v6[6]) || dword_489A28) )
  {
    v8 = -1;
    v11 = sub_1DDB40(v20, v21, v22);
    v12 = sub_1DFB3C(v11);
    sub_1DFC60(v11, v6[8] - v6[9] + v12);
  }
  else
  {
    v13 = v6[6];
    v8 = 1;
    v14 = v6[7];
    v15 = v6[8];
    v16 = v6[9];
    v17 = sub_1DDB40(*v7, v7[1], v7[2]);
    ((void (__fastcall *)(int, int, int, int, int))loc_16C008)(v13, v14, v15, v16, v17);
  }
  sub_92620(v10);
  v18 = dword_47584C;
  v19 = dword_475850;
  *v7 = dword_475848;
  v7[1] = v18;
  v7[2] = v19;
  return v8;
}
