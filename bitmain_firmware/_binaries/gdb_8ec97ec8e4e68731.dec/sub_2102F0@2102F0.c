void __fastcall sub_2102F0(const char *a1)
{
  int *v2; // r6
  _DWORD *v3; // r1
  _DWORD *v4; // r3
  _DWORD *v5; // r12
  unsigned int v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r8
  unsigned int v9; // r4
  _DWORD *v10; // r5
  int v11; // r12
  char *v12; // r3
  int v13; // r0
  int v14; // r0
  unsigned int *v15; // r4
  unsigned int i; // r5
  unsigned int v17; // r0
  unsigned int v18; // r2
  int v19; // [sp+0h] [bp-14h] BYREF
  void *ptr; // [sp+4h] [bp-10h] BYREF
  _DWORD *v21; // [sp+8h] [bp-Ch]

  v19 = 1;
  if ( !a1 )
    return;
  v2 = (int *)sub_15F70C((int)a1);
  sub_19B9EC(&ptr, a1, 1u);
  v3 = v21;
  v4 = ptr;
  v5 = v21;
  v6 = -858993459 * (((char *)v21 - (_BYTE *)ptr) >> 3);
  if ( v6 )
  {
    if ( v6 > 0x1FFFFFFF )
      sub_33D01C(v6, v21);
    v7 = sub_9836C(1717986920 * (((char *)v21 - (_BYTE *)ptr) >> 3));
    v3 = v21;
    v8 = v7;
    v4 = ptr;
    v5 = v21;
  }
  else
  {
    v8 = 0;
  }
  if ( v3 != v4 )
  {
    v9 = 0;
    v10 = v8 + 1;
    do
    {
      v11 = v4[10 * v9];
      v12 = (char *)&v4[10 * v9];
      if ( v11 != dword_487D2C
        || (v13 = *((_DWORD *)v12 + 5)) == 0
        || (v14 = sub_C37B8(v13, 0, &v8[2 * v9], v10), v3 = v21, !v14) )
      {
        *v10 = 0;
        *(v10 - 1) = 0;
      }
      v4 = ptr;
      ++v9;
      v10 += 2;
      v5 = v3;
    }
    while ( -858993459 * (((char *)v3 - (_BYTE *)ptr) >> 3) > v9 );
  }
  while ( v4 == v5 )
  {
LABEL_29:
    v19 = 1;
    v2 = sub_20F3B0(v2, &v19);
    if ( v19 )
    {
      sub_259F10("'%s' not within current stack frame.\n", a1);
      goto LABEL_23;
    }
    v4 = ptr;
    v5 = v21;
  }
  v15 = v8 + 1;
  for ( i = 1; ; ++i )
  {
    if ( *(v15 - 1) > sub_15DDFC((int)v2) )
    {
      if ( i >= -858993459 * (((char *)v21 - (_BYTE *)ptr) >> 3) )
        goto LABEL_29;
      goto LABEL_16;
    }
    v17 = sub_15DDFC((int)v2);
    v18 = *v15;
    if ( i >= -858993459 * (((char *)v21 - (_BYTE *)ptr) >> 3) )
      break;
    if ( v18 > v17 )
      goto LABEL_20;
LABEL_16:
    v15 += 2;
  }
  if ( v18 <= v17 )
    goto LABEL_29;
LABEL_20:
  if ( v2 != (int *)sub_15F7E8(0) )
  {
    sub_15E10C((int)v2);
    if ( v2 )
      sub_20E7E8(v2, 1, 1u, 1);
  }
LABEL_23:
  if ( v8 )
    sub_339E64(v8);
  if ( ptr )
    sub_339E64(ptr);
}
