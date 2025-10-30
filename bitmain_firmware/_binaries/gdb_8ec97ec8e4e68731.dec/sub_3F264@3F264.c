_DWORD *sub_3F264(_DWORD *a1, int a2, ...)
{
  int v3; // r0
  int v4; // r3
  int v5; // r0
  _DWORD *v6; // r3
  int v7; // r1
  int v9; // r0
  _DWORD v10[4]; // [sp+10h] [bp-10h] BYREF
  int varg_r2; // [sp+38h] [bp+18h] BYREF
  va_list varg_r2a; // [sp+38h] [bp+18h]
  int varg_r3; // [sp+3Ch] [bp+1Ch]
  int v14; // [sp+40h] [bp+20h]
  int *v15; // [sp+44h] [bp+24h]
  int v16; // [sp+48h] [bp+28h]
  va_list va1; // [sp+4Ch] [bp+2Ch] BYREF

  va_start(va1, a2);
  va_start(varg_r2a, a2);
  varg_r2 = va_arg(va1, _DWORD);
  varg_r3 = va_arg(va1, _DWORD);
  v14 = va_arg(va1, _DWORD);
  v15 = va_arg(va1, int *);
  v16 = va_arg(va1, _DWORD);
  v3 = sub_23192C(a2);
  (*(void (__fastcall **)(_DWORD *, int, int, int, int, int *, int))(v3 + 56))(v10, v3, varg_r2, varg_r3, v14, v15, v16);
  v4 = *v15;
  varg_r2 = v10[0];
  varg_r3 = v10[1];
  v14 = v10[2];
  switch ( v4 )
  {
    case 0:
    case 2:
    case 11:
    case 15:
      break;
    default:
      v5 = ps_getpid_0((int *)varg_r2a);
      v6 = (_DWORD *)dword_471BF4;
      if ( dword_471BF4 )
      {
        while ( v5 != v6[1] )
        {
          v6 = (_DWORD *)*v6;
          if ( !v6 )
            goto LABEL_8;
        }
        if ( *v15 == 6 )
        {
          v9 = ps_getpid_0((int *)varg_r2a);
          sub_3E974(v9);
          if ( !dword_471BF4 )
            sub_231C68(&unk_471C3C);
        }
        else
        {
          sub_3EF58(varg_r2, varg_r3, v14);
        }
      }
      break;
  }
LABEL_8:
  v7 = varg_r3;
  *a1 = varg_r2;
  a1[1] = v7;
  a1[2] = v14;
  return a1;
}
