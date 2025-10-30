_DWORD *__fastcall sub_FCD54(_DWORD *a1, int *a2, const char *a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v8; // r11
  int v13; // r3
  int v14; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  __int16 *v19; // r3
  int i; // r5
  __int16 *v21; // r3
  int v22; // r3
  _BYTE *v23; // r7
  const char *v24; // r0
  int v25; // r10
  size_t v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r12
  void *v30; // r3
  int *v31; // lr
  bool v32; // zf
  int v33; // r2
  int v34; // r2
  size_t v35; // r0
  int v36; // r0
  int v37; // r1
  int v38; // r12
  void *v39; // r3
  int *v40; // lr
  bool v41; // zf
  int v42; // r2
  int v43; // r2
  _DWORD *v44; // r0
  int v45; // r7
  int v46; // r9
  int v47; // [sp+14h] [bp-68h]
  _DWORD v48[2]; // [sp+20h] [bp-5Ch] BYREF
  _DWORD v49[2]; // [sp+28h] [bp-54h] BYREF
  void *ptr; // [sp+30h] [bp-4Ch]
  int v51; // [sp+34h] [bp-48h]
  _DWORD v52[4]; // [sp+38h] [bp-44h] BYREF
  void *v53; // [sp+48h] [bp-34h] BYREF
  int v54; // [sp+4Ch] [bp-30h]
  _DWORD v55[4]; // [sp+50h] [bp-2Ch] BYREF
  void *v56; // [sp+60h] [bp-1Ch] BYREF
  int v57; // [sp+64h] [bp-18h]
  _BYTE v58[20]; // [sp+68h] [bp-14h] BYREF

  if ( a7 && (sub_FCB6C(v48, a4, a5, a6, a8), (v13 = v48[0]) != 0)
    || (sub_21CFB4(v48, a4, a5, a6), (v13 = v48[0]) != 0)
    || !a8 && (sub_21D0BC(v48, a4, a6), (v13 = v48[0]) != 0) )
  {
    v14 = v48[1];
    *a1 = v13;
    a1[1] = v14;
    return a1;
  }
  else
  {
    v16 = sub_171258(a2);
    v17 = *(_DWORD *)(v16 + 24);
    v47 = v16;
    v18 = *(_WORD *)(v17 + 2) & 0x380;
    if ( v18 == 128 )
      v19 = *(__int16 **)(v17 + 28);
    else
      v19 = &word_3B4A2C;
    if ( *v19 > 0 )
    {
      for ( i = 0; ; ++i )
      {
        v21 = v18 == 128 ? *(__int16 **)(v17 + 28) : &word_3B4A2C;
        if ( *v21 <= i )
          break;
        v22 = *(_DWORD *)(v17 + 24) + 24 * i;
        v23 = *(_BYTE **)(v22 + 16);
        if ( v23 )
        {
          v24 = *(const char **)(v22 + 16);
          v25 = *(_DWORD *)(v22 + 12);
          v56 = v58;
          v26 = strlen(v24);
          sub_FCCA4(&v56, v23, (int)&v23[v26]);
          if ( v57 == 2147483646 || v57 == 0x7FFFFFFF )
            sub_33D184("basic_string::append");
          v27 = sub_33C320(&v56, "::", 2);
          v53 = v55;
          v29 = v27;
          v31 = (int *)(v27 + 8);
          v30 = *(void **)v27;
          v32 = *(_DWORD *)v27 == v27 + 8;
          if ( *(_DWORD *)v27 == v27 + 8 )
          {
            v27 = *v31;
            a2 = v55;
            v33 = v31[2];
            v30 = (void *)v31[3];
            v28 = v31[1];
          }
          else
          {
            v33 = *(_DWORD *)(v27 + 8);
            v53 = *(void **)v27;
          }
          if ( v32 )
          {
            *a2 = v27;
            a2[1] = v28;
            a2[2] = v33;
            a2[3] = (int)v30;
          }
          else
          {
            v55[0] = v33;
          }
          v34 = *(_DWORD *)(v29 + 4);
          *(_BYTE *)(v29 + 8) = 0;
          v54 = v34;
          *(_DWORD *)(v29 + 4) = 0;
          *(_DWORD *)v29 = v31;
          v35 = strlen(a3);
          if ( 0x7FFFFFFF - v54 < v35 )
            sub_33D184("basic_string::append");
          v36 = sub_33C320(&v53, a3, v35);
          a2 = v52;
          ptr = v52;
          v38 = v36;
          v40 = (int *)(v36 + 8);
          v39 = *(void **)v36;
          v41 = *(_DWORD *)v36 == v36 + 8;
          if ( *(_DWORD *)v36 == v36 + 8 )
          {
            v36 = *v40;
            v8 = v52;
            v42 = v40[2];
            v39 = (void *)v40[3];
            v37 = v40[1];
          }
          else
          {
            v42 = *(_DWORD *)(v36 + 8);
            ptr = *(void **)v36;
          }
          if ( v41 )
          {
            *v8 = v36;
            v8[1] = v37;
            v8[2] = v42;
            v8[3] = (int)v39;
            v8 += 4;
          }
          else
          {
            v52[0] = v42;
          }
          v43 = *(_DWORD *)(v38 + 4);
          *(_BYTE *)(v38 + 8) = 0;
          v51 = v43;
          *(_DWORD *)v38 = v40;
          v44 = v53;
          *(_DWORD *)(v38 + 4) = 0;
          if ( v44 != v55 )
            sub_339E64(v44);
          if ( v56 != v58 )
            sub_339E64(v56);
          sub_FCD54(v49, v25, a3, ptr, a5, a6, 1, a8);
          v45 = v49[0];
          v46 = v49[1];
          if ( v49[0] )
          {
            if ( ptr != v52 )
              sub_339E64(ptr);
            *a1 = v45;
            a1[1] = v46;
            return a1;
          }
          if ( ptr != v52 )
            sub_339E64(ptr);
          v17 = *(_DWORD *)(v47 + 24);
          v18 = *(_WORD *)(v17 + 2) & 0x380;
        }
      }
    }
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
}
