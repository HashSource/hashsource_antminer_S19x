unsigned int sub_40E04()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v2, "****power off hashboard****\n");
    sub_3B6AC(3, v2, 0, *(int *)"");
  }
  v0 = dword_B3C70;
  if ( !dword_B3C70 )
  {
    do
    {
      if ( sub_26C0C(v0) )
        sub_21F18((unsigned __int8)v0);
      ++v0;
    }
    while ( v0 != 4 );
    sub_3E0F0();
  }
  sub_3FD94();
  return sub_2212C();
}
