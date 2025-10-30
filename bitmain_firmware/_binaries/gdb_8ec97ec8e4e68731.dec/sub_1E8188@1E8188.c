bool __fastcall sub_1E8188(int a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r2
  _BYTE *v9; // r6
  int v10; // r9
  _BOOL4 result; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r9
  int v15; // r9
  char v16; // r3
  char *v17; // r6
  int v18; // r1
  int v19; // r2
  int *v20; // r5
  int v21; // [sp+Ch] [bp-20h] BYREF
  int v22; // [sp+10h] [bp-1Ch]
  int v23; // [sp+14h] [bp-18h]
  int v24; // [sp+1Ch] [bp-10h] BYREF
  int v25; // [sp+20h] [bp-Ch]
  int v26; // [sp+24h] [bp-8h]

  v21 = a1;
  v22 = a2;
  v23 = a3;
  v5 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v5);
  v6 = dword_488C94;
  if ( a4 )
  {
    v7 = *(_DWORD *)(dword_488C94 + 64);
    v8 = *(_DWORD *)(dword_488C94 + 68);
    v24 = *(_DWORD *)(dword_488C94 + 60);
    v25 = v7;
    v26 = v8;
    v9 = *(_BYTE **)dword_488C94;
    v10 = sub_1E2890(v24);
    result = sub_98F78(&v24, &v21);
    if ( result )
      return result;
    v15 = (int)&v9[v10];
    *v9 = 72;
    v16 = 103;
  }
  else
  {
    v12 = *(_DWORD *)(dword_488C94 + 76);
    v13 = *(_DWORD *)(dword_488C94 + 80);
    v24 = *(_DWORD *)(dword_488C94 + 72);
    v25 = v12;
    v26 = v13;
    v9 = *(_BYTE **)dword_488C94;
    v14 = sub_1E2890(v24);
    result = sub_98F78(&v24, &v21);
    if ( result )
      return result;
    v15 = (int)&v9[v14];
    *v9 = 72;
    v16 = 99;
  }
  v9[1] = v16;
  v17 = v9 + 2;
  if ( sub_98F78(&v21, dword_488C70) || sub_98F78(&v21, dword_488CF4) )
  {
    sub_93170(v17, v15 - (_DWORD)v17, "0");
  }
  else if ( sub_98F78(&v21, &qword_46BBCC) )
  {
    sub_93170(v17, v15 - (_DWORD)v17, "-1");
  }
  else
  {
    sub_1E29EC((int)v17, v15, v21, v22, v23);
  }
  sub_1E7DEC(*(const char **)v6);
  sub_1E4EB8((char **)v6, (size_t *)(v6 + 4), 0, 0, 0);
  result = v21;
  v18 = v22;
  v19 = v23;
  if ( a4 )
    v20 = (int *)(v6 + 60);
  else
    v20 = (int *)(v6 + 72);
  *v20 = v21;
  v20[1] = v18;
  v20[2] = v19;
  return result;
}
