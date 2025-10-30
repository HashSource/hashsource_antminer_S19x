int __fastcall sub_876C0(int a1, int a2, int a3, int *a4)
{
  int v5; // r12
  int v6; // r1
  int v7; // r0
  int v8; // r2
  int v9; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int *v23; // r0
  int *v24; // r0
  int v25; // [sp+4h] [bp-7Ch]
  char v26[16]; // [sp+10h] [bp-70h] BYREF
  int v27; // [sp+20h] [bp-60h]
  int v28; // [sp+40h] [bp-40h]
  int v29; // [sp+7Ch] [bp-4h]

  v5 = a2 & 2;
  a4[6] = a2;
  a4[7] = a3;
  v6 = _stack_chk_guard;
  a4[3] = -1;
  *a4 = 0;
  v29 = v6;
  a4[1] = 0;
  a4[2] = 0;
  a4[4] = 0;
  a4[5] = 0;
  if ( v5 )
  {
    if ( (a3 & 3) == 1 )
    {
      if ( (a3 & 1) != 0 )
        v5 = 2;
      else
        v5 = 130;
    }
    else if ( (a3 & 1) != 0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = 128;
    }
  }
  v7 = open64(a1, v5);
  a4[3] = v7;
  if ( v7 < 0 )
  {
    v9 = *_errno_location();
    a4[3] = -1;
    a4[5] = v9;
    goto LABEL_21;
  }
  if ( _fxstat64(3, v7, v26) )
  {
    v21 = *_errno_location();
    v22 = a4[3];
    a4[5] = v21;
    close(v22);
    goto LABEL_10;
  }
  if ( (v27 & 0xF000) != 0x8000 )
  {
    *_errno_location() = 22;
    a4[5] = 22;
    close(a4[3]);
LABEL_10:
    v9 = a4[5];
    if ( v9 )
      return -1;
    goto LABEL_12;
  }
  v8 = a4[3];
  a4[1] = v28;
  if ( v8 != -1 )
    goto LABEL_10;
  v24 = _errno_location();
  v9 = *v24;
  a4[5] = *v24;
LABEL_21:
  if ( v9 )
    return -1;
LABEL_12:
  v11 = sysconf(30);
  v12 = a4[1];
  v13 = -v11;
  v14 = v11 + v12;
  v15 = v13 & v14;
  a4[2] = v15;
  if ( v14 == v15 )
  {
    v17 = ((int (__fastcall *)(int, int, int, int, int))mmap64)(v9, v14, 3, 34, -1);
    if ( v17 == -1 )
      goto LABEL_30;
    v12 = a4[1];
    v16 = a4[7] | 0x10;
    a4[7] = v16;
  }
  else
  {
    v16 = a4[7];
    v17 = v9;
  }
  v18 = mmap64(v17, v12, a4[6], v16, a4[3], v25, 0, 0);
  *a4 = v18;
  if ( v18 != -1 )
  {
    v19 = a4[5];
    goto LABEL_16;
  }
LABEL_30:
  v23 = _errno_location();
  v19 = *v23;
  a4[5] = *v23;
LABEL_16:
  if ( !v19 )
    return *a4;
  v20 = a4[3];
  if ( v20 != -1 )
  {
    close(v20);
    v19 = a4[5];
    a4[3] = -1;
  }
  *_errno_location() = v19;
  *a4 = -1;
  return -1;
}
