int __fastcall sub_45CA8(int a1, int a2, int a3, _DWORD *a4)
{
  char v9[2048]; // [sp+10h] [bp-804h] BYREF

  if ( a4 )
    *a4 = 0;
  if ( sub_45004(a2, a3) )
  {
    sub_450E0(a1, a2);
    if ( (unsigned __int8)sub_21358((unsigned int *)(a2 + 192), (unsigned int *)(a2 + 160)) != 1 )
    {
      if ( a4 )
        *a4 = 1;
      if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
      {
        strcpy(v9, "Share above target");
        sub_1E4EC(6, v9, 0);
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
    sub_44CA8(a1);
    return 0;
  }
}
