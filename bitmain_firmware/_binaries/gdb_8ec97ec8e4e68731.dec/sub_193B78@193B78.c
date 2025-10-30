char *__fastcall sub_193B78(int a1)
{
  char ***v1; // r4
  char *v3; // r7
  char **v4; // r3
  char **v5; // t1
  char *v6; // r2

  v1 = off_46D5A4;
  v3 = (char *)sub_163938(a1, 0x12Cu);
  do
  {
    v5 = v1[1];
    ++v1;
    v4 = v5;
    if ( v5 )
    {
      v6 = v4[31];
      if ( v6 )
        ((void (__fastcall *)(int, char *))v6)(a1, &v3[20 * (_DWORD)v4[2]]);
    }
  }
  while ( v1 != &off_46D5E0 );
  return v3;
}
