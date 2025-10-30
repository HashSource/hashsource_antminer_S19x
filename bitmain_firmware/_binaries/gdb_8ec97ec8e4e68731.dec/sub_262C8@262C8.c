int __fastcall sub_262C8(
        int a1,
        int a2,
        void (__fastcall *a3)(int a1, int a2, int a3),
        int a4,
        char a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v13; // r2
  __int64 v14; // r8
  __int64 v15; // r6
  int result; // r0
  char v17; // r2
  bool v18; // zf
  __int64 v19; // r0
  int v20; // r2
  __int64 v21; // r8
  int v22; // r3
  int v23; // r3
  __int64 v24; // r0
  __int64 v25; // [sp+10h] [bp-14h]
  __int64 v26; // [sp+18h] [bp-Ch]

  *(_QWORD *)(a2 + 8) = sub_20B88(a1, 0);
  *(_QWORD *)(a2 + 24) = sub_20B88(a1, 2);
  if ( a4 )
  {
    if ( a3 )
    {
      v13 = a7;
    }
    else
    {
      v24 = sub_20B88(a1, 4);
      v13 = a7;
      *(_QWORD *)(a2 + 40) = v24;
    }
    v14 = sub_25A78(a1, a2, v13);
    v15 = sub_25A78(a1, a2, a9);
    sub_25B70(a1, a2, 0, 4, v14, SHIDWORD(v14), 4);
    sub_25B70(a1, a2, 2, 4, v15, SHIDWORD(v15), 4);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = sub_20B88(a1, 3);
    if ( a3 )
    {
      v20 = a7;
    }
    else
    {
      v19 = sub_20B88(a1, 4);
      v20 = a7;
      *(_QWORD *)(a2 + 40) = v19;
    }
    v21 = sub_25A78(a1, a2, v20);
    v25 = sub_25A78(a1, a2, a9);
    v26 = sub_25A78(a1, a2, a8);
    sub_25B70(a1, a2, 0, v22, v21, SHIDWORD(v21), 4);
    sub_25B70(a1, a2, 2, v23, v25, SHIDWORD(v25), 4);
    sub_25B70(a1, a2, 3, SHIDWORD(v26), v26, SHIDWORD(v26), 4);
  }
  v17 = *(_BYTE *)(a2 + 152);
  v18 = a3 == 0;
  if ( a3 )
    a3 = sub_26148;
  *(_DWORD *)(a2 + 136) = a7;
  *(_DWORD *)(a2 + 144) = a6;
  *(_BYTE *)(a2 + 152) = v17 & 0xFC | a4 & 1 | (2 * (a5 & 1));
  if ( v18 )
    a3 = (void (__fastcall *)(int, int, int))sub_267A8;
  *(_DWORD *)(a2 + 148) = a9;
  *(_DWORD *)(a2 + 212) = a3;
  return result;
}
