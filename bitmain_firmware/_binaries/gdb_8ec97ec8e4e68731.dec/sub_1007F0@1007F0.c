int __fastcall sub_1007F0(const char *a1, int a2)
{
  int result; // r0
  int v4; // r3
  const char *v5; // r0
  int v6; // [sp+8h] [bp-8h] BYREF

  sub_21D6B0(&v6, a1, a2, 1, 0);
  if ( v6 )
  {
    if ( *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v6 + 32) >> 3)) == 8 )
    {
      result = sub_171258(*(_DWORD *)(v6 + 24));
      v4 = **(char **)(result + 24);
      if ( v4 != 3 )
      {
        if ( v4 == 24 )
          LOWORD(v5) = -27168;
        else
          LOWORD(v5) = -27124;
        HIWORD(v5) = 57;
        sub_946B0(v5, a1);
        return 0;
      }
    }
    else
    {
      sub_946B0("RTTI symbol for class '%s' is not a type", a1);
      return 0;
    }
  }
  else
  {
    sub_946B0("RTTI symbol not found for class '%s'", a1);
    return 0;
  }
  return result;
}
