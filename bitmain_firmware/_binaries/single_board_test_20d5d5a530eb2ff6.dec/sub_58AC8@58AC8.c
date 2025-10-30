unsigned int __fastcall sub_58AC8(int a1, _DWORD *a2, unsigned __int8 *a3, unsigned int *a4)
{
  unsigned int v5; // r1
  unsigned int v8; // r7
  unsigned int result; // r0
  int v11; // r5
  _DWORD *v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  _DWORD *v17; // r4
  int v18; // r1
  int v19; // r2
  int v20; // r3
  size_t v21; // r2
  int v22; // r0
  int *v23; // r6
  unsigned int v24; // r0
  unsigned int v25; // r3
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  _DWORD *v30; // r6
  _DWORD *v31; // r4
  int v32; // r1
  int v33; // r2
  int v34; // r3
  int v35; // [sp+8h] [bp-8h] BYREF
  int v36; // [sp+Ch] [bp-4h] BYREF

  v5 = *(_DWORD *)(a1 + 52);
  if ( v5 > 1 )
  {
    v12 = (_DWORD *)(a1 + 16);
    *a4 = 0;
    v13 = *(_DWORD *)(a1 + 16);
    v14 = v12[1];
    v15 = v12[2];
    v16 = v12[3];
    v12 += 4;
    v35 = 0;
    v36 = 0;
    *a2 = v13;
    a2[1] = v14;
    a2[2] = v15;
    a2[3] = v16;
    v17 = a2 + 4;
    v18 = v12[1];
    v19 = v12[2];
    v20 = v12[3];
    *v17 = *v12;
    v17[1] = v18;
    v17[2] = v19;
    v17[3] = v20;
    return sub_58274(a1, 0, &v35, 0, &v36, 0);
  }
  else
  {
    if ( v5 == 1 )
    {
      v11 = -19;
      *a4 = 0;
      return v11;
    }
    v8 = *a4;
    result = sub_58208(a3, *a4);
    if ( result <= 0xFFFFFFEA )
    {
      if ( v8 < result )
      {
        *a4 = 0;
        return -12;
      }
      v21 = result;
      v22 = a1;
      v23 = (int *)(a1 + 16);
      v24 = sub_57378(v22, a3, v21);
      v11 = v24;
      if ( v24 <= 0xFFFFFFEA )
        *a4 = v24;
      else
        v25 = 0;
      if ( v24 <= 0xFFFFFFEA )
        v11 = 4;
      else
        *a4 = v25;
      v26 = *v23;
      v27 = v23[1];
      v28 = v23[2];
      v29 = v23[3];
      v30 = v23 + 4;
      *a2 = v26;
      a2[1] = v27;
      a2[2] = v28;
      a2[3] = v29;
      v31 = a2 + 4;
      v32 = v30[1];
      v33 = v30[2];
      v34 = v30[3];
      *v31 = *v30;
      v31[1] = v32;
      v31[2] = v33;
      v31[3] = v34;
      return v11;
    }
    *a4 = 0;
  }
  return result;
}
