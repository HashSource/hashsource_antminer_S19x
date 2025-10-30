int *__fastcall sub_12B220(int *a1, _DWORD *a2, int a3)
{
  int v3; // r12
  int (*v4)(const char *, const char *); // r3
  int v6; // r1
  int v9; // r2
  char *v10; // r3
  int v11; // r7
  int v12; // r6
  int v13; // r0
  int v14; // r4
  int v15; // r9
  char *v16; // r11
  _DWORD *v17; // r10
  int v18; // r0
  int v20; // r2
  int v21; // r1
  void *v22; // r0
  int v23; // r1
  int v24; // r2
  int (*v25)(const char *, const char *); // [sp+Ch] [bp-38h] BYREF
  char *s; // [sp+10h] [bp-34h] BYREF
  int v27[5]; // [sp+14h] [bp-30h] BYREF
  void *ptr; // [sp+28h] [bp-1Ch] BYREF
  int v29; // [sp+2Ch] [bp-18h]
  _BYTE v30[20]; // [sp+30h] [bp-14h] BYREF

  v3 = a2[4];
  v4 = strcasecmp;
  v6 = *(unsigned __int8 *)(a3 + 88);
  if ( !v3 )
    v4 = strcmp;
  v25 = v4;
  if ( !v6 )
  {
    sub_21C928(a3 + 64, a3, 4);
    *(_BYTE *)(a3 + 88) = 1;
  }
  v9 = *(unsigned __int8 *)(a3 + 4);
  v10 = *(char **)(a3 + 64);
  v11 = a2[1];
  v12 = a2[2];
  s = v10;
  if ( v9 && !*v10
    || (v27[3] = (int)a2,
        v27[4] = (int)&v25,
        v13 = sub_124020(v11, v12, (int *)&s, (int)a2, (int (__fastcall **)(int, int))&v25),
        v11 = v13,
        *(_BYTE *)(a3 + 4)) )
  {
    ptr = v30;
    if ( s )
      v20 = (int)&s[strlen(s)];
    else
      v20 = -1;
    sub_12425C(&ptr, s, v20);
    v21 = v29;
    if ( !v29 )
      goto LABEL_18;
    while ( 1 )
    {
      v23 = v21 - 1;
      v24 = *((unsigned __int8 *)ptr + v23);
      if ( v24 != 255 )
        break;
      sub_33B5A4(&ptr, v23, 1);
      v21 = v29;
      if ( !v29 )
        goto LABEL_18;
    }
    *((_BYTE *)ptr + v23) = v24 + 1;
    if ( v29 )
    {
      v27[0] = (int)ptr;
      v12 = sub_124020(v11, v12, v27, (int)a2, (int (__fastcall **)(int, int))&v25);
      v22 = ptr;
      if ( ptr == v30 )
        goto LABEL_13;
    }
    else
    {
LABEL_18:
      v22 = ptr;
      if ( ptr == v30 )
        goto LABEL_13;
    }
    sub_339E64(v22);
    goto LABEL_13;
  }
  v14 = v12 - v13;
  v12 = v13;
  v15 = v14 >> 3;
  if ( v14 > 0 )
  {
    do
    {
      v16 = s;
      v17 = (_DWORD *)(v12 + 8 * (v15 >> 1));
      v18 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*a2 + 4))(a2, v17[1]);
      if ( v25(v16, (const char *)(v18 + *v17)) >= 0 )
      {
        v12 = (int)(v17 + 2);
        v15 = v15 - (v15 >> 1) - 1;
      }
      else
      {
        v15 >>= 1;
      }
    }
    while ( v15 > 0 );
  }
LABEL_13:
  *a1 = v11;
  a1[1] = v12;
  return a1;
}
