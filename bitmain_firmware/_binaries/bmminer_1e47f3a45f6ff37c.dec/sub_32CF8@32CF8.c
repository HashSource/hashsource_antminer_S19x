int __fastcall sub_32CF8(int a1, char *a2)
{
  int result; // r0
  bool v5; // zf
  char *v6; // r3
  _BYTE s[1036]; // [sp+4h] [bp-410h] BYREF
  char v8; // [sp+410h] [bp-4h] BYREF

  memset(s, 0, sizeof(s));
  result = sub_1C7C4(a1, (int)s);
  v5 = result == 0;
  if ( result )
  {
    a2 += 256 * a1;
    v6 = (char *)(unsigned __int16)dword_533B44;
  }
  else
  {
    v6 = &v8;
  }
  if ( result )
  {
    HIWORD(v6) = (unsigned int)dword_533B44 >> 16;
    result = *(_DWORD *)&v6[4 * (_DWORD)a2];
  }
  else
  {
    a2 = &v6[4 * (_DWORD)a2];
  }
  if ( v5 )
    return *((_DWORD *)a2 - 257);
  return result;
}
