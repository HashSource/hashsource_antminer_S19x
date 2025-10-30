int __fastcall sub_194464(int a1, int a2)
{
  char *v3; // r4
  int v5; // t1
  int (__fastcall *v6)(int, int); // r3
  int result; // r0

  v3 = (char *)&off_46D5A8;
  while ( 1 )
  {
    v5 = *(_DWORD *)v3;
    v3 += 4;
    v6 = *(int (__fastcall **)(int, int))(v5 + 80);
    if ( v6 )
    {
      result = v6(a1, a2);
      if ( result )
        break;
    }
    if ( v3 == aWarningTheCurr )
      return 0;
  }
  return result;
}
