int __fastcall sub_D9F1C(const char *a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r0
  char *v6; // r3
  _BOOL4 v7; // r7
  const char *v8; // r8
  _DWORD *v9; // r4
  int result; // r0
  char *v11; // [sp+Ch] [bp-Ch] BYREF
  _DWORD *v12; // [sp+14h] [bp-4h] BYREF

  v11 = (char *)a1;
  v4 = sub_B894C((int)a1);
  v5 = sub_53238(a3);
  v6 = v11;
  v7 = v5 == 1;
  if ( !v11 )
  {
    v6 = "";
    v11 = "";
  }
  v11 = (char *)sub_9360C(v6);
  v8 = sub_D0C88((const char **)&v11);
  if ( *v11 && !isspace((unsigned __int8)*v11) )
    sub_946E0("Junk at end of arguments.");
  v9 = sub_9836C(0x8Cu);
  memset(v9, 0, 0x8Cu);
  v9[4] = 1;
  *((_BYTE *)v9 + 32) = 0;
  *((_BYTE *)v9 + 33) = 0;
  v9[13] = 0;
  v9[14] = 0;
  v9[15] = 0;
  v9[16] = 0;
  v9[17] = 0;
  v9[28] = -1;
  *v9 = off_37E20C;
  sub_D0244((int)v9, v4, v7, (int)v8, (int)&unk_478724);
  v12 = v9;
  v9[34] = 0;
  sub_D9044(0, (int *)&v12, 1);
  result = (int)v12;
  if ( v12 )
    return (*(int (__fastcall **)(_DWORD *))(*v12 + 4))(v12);
  return result;
}
