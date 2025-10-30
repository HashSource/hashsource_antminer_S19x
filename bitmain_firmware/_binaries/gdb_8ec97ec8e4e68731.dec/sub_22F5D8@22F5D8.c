int __fastcall sub_22F5D8(int a1, int a2, int a3, int a4, unsigned __int64 a5, __int64 a6, __int64 *a7)
{
  int *v12; // r6
  unsigned int *v13; // r9
  char *v14; // r4
  int v15; // r0
  void *v16; // r1
  unsigned __int64 v17; // r2
  void *v18; // r0
  unsigned int v19; // r12
  unsigned int *v20; // r0
  unsigned int *v21; // r12
  int v22; // r0
  bool v23; // zf
  int v24; // r0
  _BOOL4 v25; // r3
  _BOOL4 v26; // r11
  _DWORD *v27; // r0
  unsigned int v28; // [sp+10h] [bp-1Ch]
  char *s1; // [sp+14h] [bp-18h]
  int *v30; // [sp+1Ch] [bp-10h] BYREF
  unsigned __int64 v31; // [sp+20h] [bp-Ch] BYREF

  if ( a3 )
  {
    if ( dword_489690 )
    {
      v12 = (int *)sub_214838(a5);
      if ( sub_2145E4(a5, v12) )
      {
        v13 = (unsigned int *)(*(int (__fastcall **)(int))(a1 + 308))(a1);
        v14 = *(char **)*v12;
        v15 = sub_214778(a5, v12);
        v16 = (void *)a4;
        v17 = (unsigned int)v15;
        s1 = v14;
        v18 = (void *)a3;
        v28 = v13[1];
        v19 = *v13;
        return sub_95540(v18, v16, v17, a6, a7, v19, v28, s1);
      }
    }
    if ( dword_489FA0 )
    {
      v20 = sub_22F488(a1, a5);
      if ( v20 )
      {
        if ( (*(_DWORD *)(v20[2] + 20) & 8) != 0 )
        {
          v21 = (unsigned int *)(*(int (__fastcall **)(int))(a1 + 308))(a1);
          s1 = 0;
          v18 = (void *)a3;
          v17 = a5;
          v16 = (void *)a4;
          v28 = v21[1];
          v19 = *v21;
          return sub_95540(v18, v16, v17, a6, a7, v19, v28, s1);
        }
      }
    }
  }
  if ( !sub_22D5E8(a3, a4, a5, HIDWORD(a5), a6, &v31, &v30) )
    return -1;
  if ( sub_98F78(&dword_4878EC, &dword_475848) )
    return sub_22F4D8((int *)a1, a3, a4, (int)a7, a5, SHIDWORD(a5), v31, SHIDWORD(v31), a7);
  v22 = sub_183A88(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0));
  v23 = v22 == 0;
  if ( v22 )
    v23 = a3 == 0;
  if ( v23 || sub_24B59C(v22) != -1 )
    return sub_22F4D8((int *)a1, a3, a4, (int)a7, a5, SHIDWORD(a5), v31, SHIDWORD(v31), a7);
  if ( !v30[7] )
  {
    v24 = sub_234988();
    v25 = a2 == 4;
    if ( !v24 )
      v25 = 0;
    if ( !v25 )
    {
      v26 = a2 == 5;
      if ( !sub_234998() )
        v26 = 0;
      if ( !v26 )
        return sub_22F4D8((int *)a1, a3, a4, (int)a7, a5, SHIDWORD(a5), v31, SHIDWORD(v31), a7);
    }
  }
  v27 = (_DWORD *)sub_234930();
  return sub_109F10(a1, v27, a5, a3, v31, (unsigned __int64 *)a7);
}
