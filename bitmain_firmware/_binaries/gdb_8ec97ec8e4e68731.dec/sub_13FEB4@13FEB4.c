void __fastcall sub_13FEB4(
        _DWORD *a1,
        int *a2,
        int a3,
        int (__fastcall *a4)(int, int),
        int a5,
        void (__fastcall *a6)(int))
{
  int v7; // lr
  _BYTE *v9; // r1
  void *v11; // r3
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r9
  int v17; // r7
  int v18; // r0
  char *v19; // r4
  int v20; // r5
  char *v21; // r6
  int (__fastcall *v22)(int, _DWORD *, _DWORD); // t1
  char *v23; // r1
  char *v24; // r4
  char *v25; // r5
  char *v26; // r4
  __int64 v27; // r2
  unsigned int v28; // t1
  unsigned int v29; // r6
  int v31; // [sp+Ch] [bp-110h] BYREF
  int v32; // [sp+10h] [bp-10Ch]
  char *v33; // [sp+14h] [bp-108h] BYREF
  char *v34; // [sp+18h] [bp-104h]
  char *v35; // [sp+1Ch] [bp-100h]
  _DWORD *v36; // [sp+20h] [bp-FCh] BYREF
  void *ptr; // [sp+24h] [bp-F8h]
  _DWORD v38[4]; // [sp+28h] [bp-F4h] BYREF
  int v39; // [sp+38h] [bp-E4h] BYREF
  char v40; // [sp+3Ch] [bp-E0h]
  char v41; // [sp+3Dh] [bp-DFh]
  void *v42; // [sp+40h] [bp-DCh]
  void *v43; // [sp+44h] [bp-D8h]
  _DWORD v44[4]; // [sp+48h] [bp-D4h] BYREF
  void *v45; // [sp+58h] [bp-C4h]
  char v46; // [sp+60h] [bp-BCh] BYREF
  char v47; // [sp+74h] [bp-A8h]
  void *v48; // [sp+78h] [bp-A4h]
  char v49; // [sp+80h] [bp-9Ch] BYREF
  char v50; // [sp+90h] [bp-8Ch]
  void *v51; // [sp+94h] [bp-88h]
  char v52; // [sp+9Ch] [bp-80h] BYREF
  char v53; // [sp+ACh] [bp-70h]
  void *v54; // [sp+B0h] [bp-6Ch]
  char v55; // [sp+B8h] [bp-64h] BYREF
  char v56; // [sp+C8h] [bp-54h]
  int v57; // [sp+108h] [bp-14h]
  int v58; // [sp+10Ch] [bp-10h]
  _DWORD v59[3]; // [sp+110h] [bp-Ch]

  v7 = a2[3];
  v9 = (_BYTE *)a2[2];
  v36 = v38;
  sub_12425C(&v36, v9, (int)&v9[v7]);
  v11 = v36;
  v12 = 1;
  v13 = *a2;
  v14 = *((unsigned __int8 *)a2 + 4);
  v41 = 1;
  v39 = v13;
  v40 = v14;
  if ( v36 == v38 )
  {
    v12 = *v36;
    v14 = v36[1];
    v15 = v36[2];
    v11 = (void *)v36[3];
  }
  else
  {
    v15 = v38[0];
  }
  v42 = v44;
  if ( v36 == v38 )
  {
    v44[0] = v12;
    v44[1] = v14;
    v44[2] = v15;
    v44[3] = v11;
  }
  else
  {
    v44[0] = v15;
  }
  if ( v36 != v38 )
    v42 = v11;
  v59[0] = 0;
  v47 = 0;
  v50 = 0;
  v53 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  *(_DWORD *)((char *)v59 + 3) = 0;
  v43 = ptr;
  sub_132734(&v36, (int)&v39);
  if ( a1[1] == a1[2] )
    ((void (__fastcall *)(_DWORD *))loc_13A758)(a1);
  sub_12B220(&v31, a1, (int)&v39);
  v16 = v32;
  v17 = v31;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  sub_1485BC(&v33, (v32 - v31) >> 3);
  for ( ; v17 != v16; v17 += 8 )
  {
    v18 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a1 + 4))(a1, *(_DWORD *)(v17 + 4));
    v19 = (char *)ptr;
    v20 = v18;
    v21 = (char *)v38[0];
    if ( ptr != (void *)v38[0] )
    {
      while ( 1 )
      {
        v22 = *(int (__fastcall **)(int, _DWORD *, _DWORD))v19;
        v19 += 4;
        if ( v22(v20, v36, 0) )
          break;
        if ( v21 == v19 )
          goto LABEL_22;
      }
      if ( !a4 || a4(a3, v20) )
      {
        if ( v34 == v35 )
        {
          sub_E4118(&v33, v34, (_DWORD *)(v17 + 4));
        }
        else
        {
          v23 = v34 + 4;
          if ( v34 )
            *(_DWORD *)v34 = *(_DWORD *)(v17 + 4);
          v34 = v23;
        }
      }
    }
LABEL_22:
    ;
  }
  v24 = v33;
  v25 = v34;
  if ( v33 != v34 )
  {
    sub_13FD28((int)v33, v34, 2 * (31 - __clz((v34 - v33) >> 2)));
    sub_13A94C(v24, v25);
    v26 = v33;
    v25 = v34;
    if ( v33 != v34 )
    {
      v27 = -1;
      do
      {
        v28 = *(_DWORD *)v26;
        v26 += 4;
        v29 = v28;
        if ( v28 != v27 )
        {
          a6(a5);
          v27 = v29;
        }
      }
      while ( v25 != v26 );
      v25 = v33;
    }
  }
  if ( v25 )
    sub_339E64(v25);
  if ( ptr )
    sub_339E64(ptr);
  if ( v56 )
  {
    v56 = 0;
    if ( v54 != &v55 )
      sub_339E64(v54);
  }
  if ( v53 )
  {
    v53 = 0;
    if ( v51 != &v52 )
      sub_339E64(v51);
  }
  if ( v50 )
  {
    v50 = 0;
    if ( v48 != &v49 )
      sub_339E64(v48);
  }
  if ( v47 )
  {
    v47 = 0;
    if ( v45 != &v46 )
      sub_339E64(v45);
  }
  if ( v42 != v44 )
    sub_339E64(v42);
}
