int __fastcall sub_44E74(int a1, int a2, int a3, _DWORD *a4)
{
  char v9[2048]; // [sp+10h] [bp-804h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( sub_4428C(a2) )
  {
    sub_44384(a1, a2);
    if ( (unsigned __int8)sub_20AB0((unsigned int *)(a2 + 192), (unsigned int *)(a2 + 160)) != 1 )
    {
      if ( a4 )
        *a4 = 1;
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
      {
        strcpy(v9, "Share above target");
        sub_1DB6C(6, v9, 0);
      }
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    sub_43F18(a1);
    return 0;
  }
}
