void __fastcall sub_1D0C5C(
        _DWORD *a1,
        int a2,
        int (__fastcall *a3)(_DWORD, int, int),
        int *a4,
        int a5,
        int (__fastcall *a6)(int, int),
        int a7,
        int (__fastcall *a8)(int, _DWORD *),
        int a9)
{
  int v10; // lr
  _BYTE *v11; // r3
  void *v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int *i; // r3
  _DWORD *v20; // r0
  int j; // r4
  void *v22; // r0
  int v23; // r0
  _DWORD v25[2]; // [sp+10h] [bp-F8h] BYREF
  _DWORD v26[4]; // [sp+18h] [bp-F0h] BYREF
  int v27; // [sp+28h] [bp-E0h] BYREF
  char v28; // [sp+2Ch] [bp-DCh]
  char v29; // [sp+2Dh] [bp-DBh]
  void *ptr; // [sp+30h] [bp-D8h]
  int v31; // [sp+34h] [bp-D4h]
  _DWORD v32[4]; // [sp+38h] [bp-D0h] BYREF
  void *v33; // [sp+48h] [bp-C0h]
  char v34; // [sp+50h] [bp-B8h] BYREF
  char v35; // [sp+64h] [bp-A4h]
  void *v36; // [sp+68h] [bp-A0h]
  char v37; // [sp+70h] [bp-98h] BYREF
  char v38; // [sp+80h] [bp-88h]
  void *v39; // [sp+84h] [bp-84h]
  char v40; // [sp+8Ch] [bp-7Ch] BYREF
  char v41; // [sp+9Ch] [bp-6Ch]
  void *v42; // [sp+A0h] [bp-68h]
  char v43; // [sp+A8h] [bp-60h] BYREF
  char v44; // [sp+B8h] [bp-50h]
  int v45; // [sp+F8h] [bp-10h]
  int v46; // [sp+FCh] [bp-Ch]
  _DWORD var8[9]; // [sp+100h] [bp-8h]

  v10 = a4[3];
  v11 = (_BYTE *)a4[2];
  v25[0] = v26;
  sub_1CF018(v25, v11, (int)&v11[v10]);
  v14 = (void *)v25[0];
  v15 = 1;
  v16 = *a4;
  v17 = *((unsigned __int8 *)a4 + 4);
  v29 = 1;
  v27 = v16;
  v28 = v17;
  if ( (_DWORD *)v25[0] == v26 )
  {
    v15 = *(_DWORD *)v25[0];
    v17 = *(_DWORD *)(v25[0] + 4);
    v18 = *(_DWORD *)(v25[0] + 8);
    v14 = *(void **)(v25[0] + 12);
  }
  else
  {
    v18 = v26[0];
  }
  ptr = v32;
  if ( (_DWORD *)v25[0] == v26 )
  {
    v32[0] = v15;
    v32[1] = v17;
    v32[2] = v18;
    v32[3] = v14;
  }
  else
  {
    v32[0] = v18;
  }
  if ( (_DWORD *)v25[0] != v26 )
    ptr = v14;
  var8[0] = 0;
  v35 = 0;
  v38 = 0;
  v41 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  *(_DWORD *)((char *)var8 + 3) = 0;
  v31 = v25[1];
  for ( i = (int *)sub_1D0878(a1, 1)[6]; i; i = (int *)*i )
    *((_BYTE *)i + 55) &= 0xFCu;
  v20 = sub_1D0878(a1, 1);
  for ( j = v20[6]; j; j = *(_DWORD *)j )
  {
    while ( 1 )
    {
      v20 = (_DWORD *)sub_258BD4(v20);
      if ( !*(_BYTE *)(j + 52) && !*(_DWORD *)(j + 24) )
      {
        if ( !a3
          || !*(_BYTE *)(j + 54)
          && (((int (__fastcall *)(int, _DWORD))a3)(a2, *(_DWORD *)(j + 4))
           || (dword_489708 || (v23 = sub_3245A4(*(_DWORD *)(j + 4)), (v20 = (_DWORD *)a3(a2, v23, 1)) != 0))
           && (v22 = sub_1CE0F4(j), (v20 = (_DWORD *)a3(a2, (int)v22, 0)) != 0)) )
        {
          v20 = (_DWORD *)sub_1CE2B8(j, (int)a1, a9, (int)&v27, a5, a6);
          if ( v20 )
          {
            v20 = (_DWORD *)sub_1CE1F0((int)a1, j);
            if ( a8 )
              break;
          }
        }
      }
      j = *(_DWORD *)j;
      if ( !j )
        goto LABEL_24;
    }
    v20 = (_DWORD *)a8(a7, v20);
  }
LABEL_24:
  if ( v44 )
  {
    v44 = 0;
    if ( v42 != &v43 )
      sub_339E64(v42);
  }
  if ( v41 )
  {
    v41 = 0;
    if ( v39 != &v40 )
      sub_339E64(v39);
  }
  if ( v38 )
  {
    v38 = 0;
    if ( v36 != &v37 )
      sub_339E64(v36);
  }
  if ( v35 )
  {
    v35 = 0;
    if ( v33 != &v34 )
      sub_339E64(v33);
  }
  if ( ptr != v32 )
    sub_339E64(ptr);
}
