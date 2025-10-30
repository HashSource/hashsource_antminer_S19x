char *__fastcall sub_20F554(_BYTE *a1, _DWORD *a2)
{
  _BYTE *v2; // r4
  int v3; // r7
  int *i; // r9
  _BYTE *v5; // r0
  int v6; // r2
  const void *v7; // r3
  int v8; // r2
  int v9; // t1
  size_t v10; // r6
  unsigned __int8 v11; // r2
  int v12; // r0
  int *v13; // r3
  int *v14; // r0
  int *v15; // r4
  int v17; // r5
  int j; // r4
  int *v19; // r0
  int v20; // r8
  _DWORD *v21; // r0
  int v22; // r0
  int *v23; // r7
  void *src; // [sp+1Ch] [bp-58h]
  _DWORD v26[4]; // [sp+20h] [bp-54h] BYREF
  int v27; // [sp+30h] [bp-44h] BYREF
  int v28; // [sp+34h] [bp-40h]
  int v29; // [sp+38h] [bp-3Ch]
  int v30; // [sp+3Ch] [bp-38h]
  int v31; // [sp+40h] [bp-34h]
  int v32[3]; // [sp+44h] [bp-30h] BYREF
  unsigned __int8 v33; // [sp+50h] [bp-24h]
  int v34; // [sp+54h] [bp-20h]
  void *ptr; // [sp+58h] [bp-1Ch] BYREF
  int v36; // [sp+5Ch] [bp-18h]
  int v37; // [sp+60h] [bp-14h] BYREF
  unsigned __int8 v38; // [sp+64h] [bp-10h]
  int v39; // [sp+68h] [bp-Ch]

  v2 = a1;
  if ( !a1 )
  {
LABEL_18:
    if ( a2 )
      *a2 = 1;
    return (char *)sub_15F7E8((_BOOL4)"No stack.");
  }
  v3 = 0;
  for ( i = v26; ; ++i )
  {
    v5 = (_BYTE *)sub_9360C(v2);
    v6 = (unsigned __int8)*v5;
    v7 = v5;
    if ( !*v5 )
      break;
    if ( (word_438898[v6] & 0x40) != 0 )
    {
      ptr = &v37;
      v2 = v5;
      v32[0] = 0;
    }
    else
    {
      v2 = v5;
      do
      {
        v9 = (unsigned __int8)*++v2;
        v8 = v9;
      }
      while ( v9 && (word_438898[v8] & 0x40) == 0 );
      v10 = v2 - v5;
      ptr = &v37;
      v32[0] = v2 - v5;
      if ( (unsigned int)(v2 - v5) > 0xF )
      {
        src = v5;
        v14 = (int *)sub_33B2BC(&ptr, v32, 0);
        v7 = src;
        ptr = v14;
        v37 = v32[0];
LABEL_14:
        memcpy(v14, v7, v10);
        goto LABEL_15;
      }
      if ( v10 == 1 )
      {
        v11 = *v5;
        v36 = 1;
        LOWORD(v37) = v11;
        if ( v3 == 4 )
          goto LABEL_16;
        goto LABEL_11;
      }
      if ( v10 )
      {
        v14 = &v37;
        goto LABEL_14;
      }
    }
LABEL_15:
    v36 = v32[0];
    *((_BYTE *)ptr + v32[0]) = 0;
    if ( v3 == 4 )
LABEL_16:
      sub_946E0("Too many args in frame specification");
LABEL_11:
    ++v3;
    v12 = sub_14CC6C((int)ptr);
    v13 = (int *)ptr;
    *i = v12;
    if ( v13 != &v37 )
      sub_339E64(v13);
  }
  if ( !v3 )
    goto LABEL_18;
  v17 = v26[0];
  if ( a2 )
    *a2 = v6;
  if ( v3 == 1 )
  {
    ptr = (void *)sub_26EB1C(v17);
    v19 = (int *)sub_15F70C((int)ptr);
    v15 = sub_20F3B0(v19, (int *)&ptr);
    if ( ptr )
    {
      v20 = sub_26EBA8(v17);
      v21 = sub_15CD34(&v27, v20);
      v15 = (int *)sub_15F70C((int)v21);
      if ( v15 )
      {
        while ( 1 )
        {
          ((void (__fastcall *)(int *, int *))loc_15CFA0)(v32, v15);
          if ( sub_15D0C4(v27, v28, v29, v30, v31, v32[0], v32[1], v32[2], v33, v34) )
            break;
          v15 = (int *)((int (__fastcall *)(int *))loc_15FA88)(v15);
          if ( !v15 )
            return sub_15D59C(v20, 0);
        }
        while ( 1 )
        {
          v22 = ((int (__fastcall *)(int *))loc_15FA88)(v15);
          v23 = (int *)v22;
          if ( !v22 )
            break;
          ((void (__fastcall *)(void **, int))loc_15CFA0)(&ptr, v22);
          if ( !sub_15D0C4(v27, v28, v29, v30, v31, (int)ptr, v36, v37, v38, v39) )
            break;
          v15 = v23;
        }
      }
      else
      {
        return sub_15D59C(v20, 0);
      }
    }
  }
  else
  {
    for ( j = 0; ; v17 = v26[j] )
    {
      *(&ptr + j++) = (void *)sub_26EBA8(v17);
      if ( v3 == j )
        break;
    }
    if ( v3 != 2 )
      sub_946E0("Too many args in frame specification");
    return sub_15D59C((int)ptr, v36);
  }
  return (char *)v15;
}
