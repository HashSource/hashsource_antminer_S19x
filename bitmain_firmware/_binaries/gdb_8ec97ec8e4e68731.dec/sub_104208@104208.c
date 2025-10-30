int *__fastcall sub_104208(int *a1, int *a2, char *a3, _DWORD *a4)
{
  _DWORD *v4; // r11
  int v6; // r1
  int v7; // r4
  int v9; // r2
  __int16 *v10; // r3
  int v11; // r3
  char *v12; // r8
  int v13; // r9
  size_t v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r12
  void *v18; // r3
  int *v19; // lr
  bool v20; // zf
  int v21; // r2
  int v22; // r3
  size_t v23; // r2
  _DWORD *v24; // r0
  int v25; // r1
  _DWORD *v26; // r12
  _DWORD *v27; // r3
  _DWORD *v28; // lr
  bool v29; // zf
  int v30; // r2
  _DWORD *v31; // r0
  _DWORD *v32; // r1
  int v33; // r0
  int v34; // r2
  __int16 *v35; // r3
  int v38; // [sp+10h] [bp-5Ch]
  _DWORD *ptr; // [sp+20h] [bp-4Ch]
  _DWORD v41[4]; // [sp+28h] [bp-44h] BYREF
  void *v42[2]; // [sp+38h] [bp-34h] BYREF
  _BYTE v43[16]; // [sp+40h] [bp-2Ch] BYREF
  void *v44; // [sp+50h] [bp-1Ch] BYREF
  int v45; // [sp+54h] [bp-18h]
  _DWORD v46[5]; // [sp+58h] [bp-14h] BYREF

  v6 = *a2;
  v7 = 0;
  v9 = *(_WORD *)(v6 + 2) & 0x380;
  *a1 = 0;
  a1[1] = 0;
  while ( 1 )
  {
    v10 = v9 == 128 ? *(__int16 **)(v6 + 28) : &word_3B4A2C;
    if ( *v10 <= v7 )
      return a1;
    v11 = *(_DWORD *)(v6 + 24) + 24 * v7;
    v12 = *(char **)(v11 + 16);
    if ( v12 )
    {
      v13 = 1;
      v38 = *(_DWORD *)(v11 + 12);
      sub_10414C(a1, v12, a3, a4, 1, 0);
      if ( *a1 )
        return a1;
      v42[0] = v43;
      v14 = strlen(v12);
      sub_103A6C(v42, v12, (int)&v12[v14]);
      if ( v42[1] == (void *)0x7FFFFFFF )
        sub_33D184("basic_string::append");
      v15 = sub_33C320(v42, ".", 1);
      v44 = v46;
      v17 = v15;
      v19 = (int *)(v15 + 8);
      v18 = *(void **)v15;
      v20 = *(_DWORD *)v15 == v15 + 8;
      if ( *(_DWORD *)v15 == v15 + 8 )
      {
        v15 = *v19;
        v13 = (int)v46;
        v16 = v19[1];
        v21 = v19[2];
        v18 = (void *)v19[3];
      }
      else
      {
        v21 = *(_DWORD *)(v15 + 8);
        v44 = *(void **)v15;
      }
      if ( v20 )
      {
        *(_DWORD *)v13 = v15;
        *(_DWORD *)(v13 + 4) = v16;
        *(_DWORD *)(v13 + 8) = v21;
        *(_DWORD *)(v13 + 12) = v18;
      }
      else
      {
        v46[0] = v21;
      }
      v22 = *(_DWORD *)(v17 + 4);
      *(_BYTE *)(v17 + 8) = 0;
      v45 = v22;
      *(_DWORD *)v17 = v19;
      *(_DWORD *)(v17 + 4) = 0;
      v23 = strlen(a3);
      if ( 0x7FFFFFFF - v45 < v23 )
        sub_33D184("basic_string::append");
      v24 = (_DWORD *)sub_33C320(&v44, a3, v23);
      ptr = v41;
      v26 = v24;
      v28 = v24 + 2;
      v27 = (_DWORD *)*v24;
      v29 = *v24 == (_DWORD)(v24 + 2);
      if ( (_DWORD *)*v24 == v24 + 2 )
      {
        v24 = (_DWORD *)*v28;
        v4 = v41;
        v27 = (_DWORD *)v28[3];
        v25 = v28[1];
        v30 = v28[2];
      }
      else
      {
        v30 = v24[2];
        ptr = (_DWORD *)*v24;
      }
      if ( v29 )
      {
        *v4 = v24;
        v4[1] = v25;
        v4[2] = v30;
        v4[3] = v27;
        v4 += 4;
      }
      else
      {
        v41[0] = v30;
      }
      *((_BYTE *)v26 + 8) = 0;
      *v26 = v28;
      v31 = v44;
      v26[1] = 0;
      if ( v31 != v46 )
        sub_339E64(v31);
      if ( v42[0] != v43 )
        sub_339E64(v42[0]);
      sub_21CFB4(a1, ptr, a4, 1);
      v32 = ptr;
      if ( *a1 )
        goto LABEL_38;
      sub_21D0BC(a1, ptr, 1);
      if ( *a1
        || ((v33 = sub_171258(v38), v34 = *(_DWORD *)(v33 + 24), (*(_WORD *)(v34 + 2) & 0x380) != 0x80)
          ? (v35 = &word_3B4A2C)
          : (v35 = *(__int16 **)(v34 + 28)),
            *v35 > 0 && (sub_104208(a1, v33 + 24, a3, a4), *a1)) )
      {
        v32 = ptr;
LABEL_38:
        if ( v32 != v41 )
          sub_339E64(v32);
        return a1;
      }
      if ( ptr != v41 )
        sub_339E64(ptr);
      v6 = *a2;
      v9 = *(_WORD *)(*a2 + 2) & 0x380;
    }
    ++v7;
  }
}
