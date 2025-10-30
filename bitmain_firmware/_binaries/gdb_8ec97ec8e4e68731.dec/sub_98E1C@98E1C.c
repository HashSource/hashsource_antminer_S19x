char *__fastcall sub_98E1C(int a1)
{
  char *v1; // r4
  bool v2; // cc
  int v3; // r2
  char *v4; // r0

  v1 = (char *)(dword_475844 + 1);
  v2 = dword_475844 + 1 <= 15;
  if ( dword_475844 + 1 > 15 )
  {
    v3 = 0;
    v1 = byte_475524;
  }
  else
  {
    v3 = 50;
  }
  if ( dword_475844 + 1 > 15 )
    dword_475844 = v3;
  else
    dword_475844 = (int)v1;
  if ( v2 )
    v1 = &byte_475524[v3 * (_DWORD)v1];
  strcpy(v1, "0x");
  v4 = sub_98904(a1, 0, 4, 0);
  strcat(v1, v4);
  return v1;
}
