void __fastcall sub_FF844(int a1, unsigned int *a2, int (__fastcall *a3)(_DWORD, int), int a4)
{
  unsigned int v8; // r3
  bool v9; // cc
  int v10; // r2
  void *v11; // r9
  int v12; // r8
  const char *v13; // r0
  void *v14; // r8
  _DWORD *i; // r1
  unsigned int *v16; // r8
  unsigned int v17; // r3
  _DWORD *v18; // r1
  size_t v19; // r11
  void *v20; // r0
  int v21; // r3
  int v22; // r2
  int v23; // r3
  char *v24; // r2
  char *v25; // r0
  int v26; // r12
  int v27; // r1
  bool v28; // zf
  int v29; // r2
  char *v30; // r12
  void *v31; // r0
  int v32; // r3
  size_t v33; // r8
  int v34; // r2
  int v35; // r3
  unsigned int v36; // r0
  int v37; // r12
  int v38; // r1
  int v39; // r2
  bool v40; // cc
  size_t v41; // r1
  size_t v42; // r0
  int v43; // r0
  _DWORD *v44; // r3
  unsigned int v45; // r1
  unsigned int v46; // r2
  char *v47; // r0
  unsigned int v48; // [sp+Ch] [bp-40h] BYREF
  char *v49; // [sp+10h] [bp-3Ch] BYREF
  int v50; // [sp+14h] [bp-38h] BYREF
  char *s[4]; // [sp+1Ch] [bp-30h] BYREF
  void *ptr; // [sp+2Ch] [bp-20h] BYREF
  void *src; // [sp+30h] [bp-1Ch]
  size_t n; // [sp+34h] [bp-18h]
  char v55; // [sp+38h] [bp-14h] BYREF

  if ( !a2 )
    return;
  v8 = *a2;
  if ( a3 )
  {
    v9 = v8 > 4;
    if ( v8 != 4 )
      v9 = v8 > 1;
    v10 = !v9;
    if ( v8 == 39 )
      v10 |= 1u;
    if ( v10 )
    {
      sub_7F564(&ptr, (int)a2, 10);
      if ( ptr )
      {
        v11 = sub_92E28();
        sub_21D6B0(&v50, ptr, 0, 1, 0);
        v12 = v50;
        sub_92E40((int)v11);
        if ( v12 )
        {
          v13 = (const char *)a3(*(_DWORD *)(v12 + 24), a4);
          v14 = ptr;
          if ( v13 )
          {
            a2[2] = (unsigned int)v13;
            *a2 = 0;
            a2[3] = strlen(v13);
            if ( v14 )
              free(v14);
            return;
          }
        }
        else
        {
          v14 = ptr;
        }
        if ( v14 )
          free(v14);
      }
      v8 = *a2;
    }
  }
  switch ( v8 )
  {
    case 0u:
      sub_FF3C8(a1, (int)a2, a3, a4);
      return;
    case 1u:
      sub_256760(&ptr);
      v16 = a2;
      src = &v55;
      ptr = &off_3F2924;
      n = 0;
      v55 = 0;
      break;
    case 2u:
    case 7u:
    case 0x2Au:
    case 0x2Bu:
      goto LABEL_23;
    case 3u:
    case 4u:
    case 0x29u:
    case 0x2Fu:
      i = (_DWORD *)a2[2];
      goto LABEL_22;
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Du:
    case 0x1Eu:
    case 0x22u:
    case 0x23u:
    case 0x24u:
      sub_FF844(a1, a2[2], a3, a4);
      return;
    case 0x2Eu:
      for ( i = (_DWORD *)a2[2]; i; a2[2] = (unsigned int)i )
      {
        if ( (unsigned int)(*i - 26) > 1 )
          break;
        i = (_DWORD *)i[2];
      }
LABEL_22:
      sub_FF844(a1, i, a3, a4);
LABEL_23:
      sub_FF844(a1, a2[3], a3, a4);
      return;
    default:
      return;
  }
  while ( 2 )
  {
    v17 = *v16;
    if ( *v16 != 1 )
    {
LABEL_39:
      if ( v17 )
      {
        sub_FF844(a1, v16, a3, a4);
      }
      else
      {
        sub_2564E4(&ptr, v16[2], v16[3]);
        v31 = *(void **)(a1 + 20);
        v32 = *(_DWORD *)(a1 + 24);
        v33 = n;
        *a2 = 0;
        if ( v32 - (int)v31 < v33 + 1 )
        {
          obstack_newchunk((struct obstack *)(a1 + 8), v33 + 1);
          v31 = *(void **)(a1 + 20);
        }
        memcpy(v31, src, v33);
        v34 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v34 + v33 + 1;
        *(_BYTE *)(v34 + v33) = 0;
        v35 = *(_DWORD *)(a1 + 20);
        v36 = *(_DWORD *)(a1 + 16);
        v37 = *(_DWORD *)(a1 + 24);
        v38 = *(_DWORD *)(a1 + 12);
        if ( v36 == v35 )
          *(_BYTE *)(a1 + 48) |= 2u;
        v39 = (v35 + *(_DWORD *)(a1 + 32)) & ~*(_DWORD *)(a1 + 32);
        v40 = v39 - v38 > (unsigned int)(v37 - v38);
        v41 = n;
        *(_DWORD *)(a1 + 20) = v39;
        if ( v40 )
          v39 = v37;
        *(_DWORD *)(a1 + 16) = v39;
        if ( v40 )
          *(_DWORD *)(a1 + 20) = v37;
        a2[2] = v36;
        a2[3] = v41;
        sub_FF3C8(a1, (int)a2, a3, a4);
      }
      break;
    }
    while ( 1 )
    {
      v18 = (_DWORD *)v16[2];
      if ( !*v18 )
        break;
      sub_FF844(a1, v18, a3, a4);
      sub_7F564(s, v16[2], 100);
      if ( !s[0] )
        goto LABEL_49;
      v42 = strlen(s[0]);
      sub_2564E4(&ptr, s[0], v42);
      if ( s[0] )
        free(s[0]);
LABEL_38:
      sub_2564E4(&ptr, "::", 2);
      v16 = (unsigned int *)v16[3];
      v17 = *v16;
      if ( *v16 != 1 )
        goto LABEL_39;
    }
    sub_2564E4(&ptr, v18[2], v18[3]);
    v19 = n;
    v20 = *(void **)(a1 + 20);
    v21 = *(_DWORD *)(a1 + 24);
    s[0] = 0;
    if ( v21 - (int)v20 < n + 1 )
    {
      obstack_newchunk((struct obstack *)(a1 + 8), n + 1);
      v20 = *(void **)(a1 + 20);
    }
    memcpy(v20, src, v19);
    v22 = *(_DWORD *)(a1 + 20);
    v23 = v22 + v19 + 1;
    *(_DWORD *)(a1 + 20) = v23;
    *(_BYTE *)(v22 + v19) = 0;
    v24 = *(char **)(a1 + 20);
    v25 = *(char **)(a1 + 16);
    v26 = *(_DWORD *)(a1 + 32);
    v27 = *(_DWORD *)(a1 + 24);
    v28 = v25 == v24;
    s[2] = v25;
    if ( v25 == v24 )
      LOBYTE(v23) = *(_BYTE *)(a1 + 48);
    v29 = (unsigned int)&v24[v26] & ~v26;
    *(_DWORD *)(a1 + 20) = v29;
    if ( v28 )
      *(_BYTE *)(a1 + 48) = v23 | 2;
    v30 = (char *)n;
    if ( v29 - *(_DWORD *)(a1 + 12) > (unsigned int)(v27 - *(_DWORD *)(a1 + 12)) )
    {
      v29 = v27;
      *(_DWORD *)(a1 + 20) = v27;
    }
    *(_DWORD *)(a1 + 16) = v29;
    s[3] = v30;
    if ( !sub_FF3C8(a1, (int)s, a3, a4) )
      goto LABEL_38;
    n = 0;
    *(_BYTE *)src = 0;
    sub_7F564(&v49, (int)s, 100);
    if ( v49 )
    {
      v43 = sub_FE404(a1 + 8, v49, &v48);
      v44 = (_DWORD *)a2[2];
      v45 = v48;
      v44[2] = v43;
      v46 = a2[2];
      v47 = v49;
      *v44 = 0;
      *(_DWORD *)(v46 + 12) = v45;
      a2[3] = v16[3];
      if ( v47 )
        free(v47);
      v16 = a2;
      continue;
    }
    break;
  }
LABEL_49:
  sub_256478(&ptr);
}
