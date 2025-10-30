int __fastcall sub_88C38(int a1, int a2, int a3, int *s)
{
  int v8; // r1
  int v9; // r0
  int v10; // r5
  int v11; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r0
  int v20; // r0
  int v21; // r5
  int v22; // r0
  int *v23; // r0
  int v24; // r2
  int *v25; // r0
  int v26; // r3
  int v27; // r0
  int *v28; // r0
  int v29; // [sp+4h] [bp-7Ch]
  char v30[16]; // [sp+10h] [bp-70h] BYREF
  int v31; // [sp+20h] [bp-60h]
  int v32; // [sp+40h] [bp-40h]

  memset(s, 0, 0x20u);
  v8 = a2 & 2;
  s[6] = a2;
  s[7] = a3;
  s[3] = -1;
  if ( (a2 & 2) != 0 )
  {
    v8 = (a3 & 3) == 1 ? 2 : 0;
    if ( (a3 & 1) == 0 )
      v8 |= 0x80u;
  }
  v9 = open64(a1, v8);
  s[3] = v9;
  if ( v9 < 0 )
  {
    v10 = *_errno_location();
    s[3] = -1;
    s[5] = v10;
  }
  else
  {
    if ( _fxstat64(3, v9, v30) )
    {
      v26 = *_errno_location();
      v27 = s[3];
      s[5] = v26;
      close(v27);
      goto LABEL_11;
    }
    if ( (v31 & 0xF000) != 0x8000 )
    {
      *_errno_location() = 22;
      s[5] = 22;
      close(s[3]);
LABEL_11:
      v10 = s[5];
      goto LABEL_12;
    }
    v24 = s[3];
    s[1] = v32;
    if ( v24 != -1 )
      goto LABEL_11;
    v25 = _errno_location();
    v10 = *v25;
    s[5] = *v25;
  }
LABEL_12:
  if ( v10 )
    return -1;
  v13 = sysconf(30);
  v14 = s[1];
  v15 = -v13;
  v16 = v13 + v14;
  v17 = v15 & v16;
  s[2] = v17;
  if ( v16 == v17 )
  {
    v19 = ((int (__fastcall *)(_DWORD, int, int, int, int))mmap64)(0, v16, 3, 34, -1);
    if ( v19 == -1 )
      goto LABEL_31;
    v14 = s[1];
    v18 = s[7] | 0x10;
    s[7] = v18;
  }
  else
  {
    v18 = s[7];
    v19 = 0;
  }
  v20 = mmap64(v19, v14, s[6], v18, s[3], v29, 0, 0);
  *s = v20;
  if ( v20 != -1 )
  {
    v21 = s[5];
    goto LABEL_20;
  }
LABEL_31:
  v28 = _errno_location();
  v21 = *v28;
  s[5] = *v28;
LABEL_20:
  if ( !v21 )
    return *s;
  v22 = s[3];
  if ( v22 != -1 )
  {
    close(v22);
    v21 = s[5];
    s[3] = -1;
  }
  v23 = _errno_location();
  v11 = -1;
  *v23 = v21;
  *s = -1;
  return v11;
}
