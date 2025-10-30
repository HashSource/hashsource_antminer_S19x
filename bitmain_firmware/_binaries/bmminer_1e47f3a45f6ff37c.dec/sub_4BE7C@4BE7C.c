int sub_4BE7C()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(v2, "[DEBUG] Check if is unbalance happen.\n");
    sub_3B6AC(4, v2, 0, *(unsigned __int16 *)"");
  }
  v0 = 0;
  while ( !sub_26C0C(v0) || !sub_4BDA8(v0) )
  {
    if ( ++v0 == 4 )
      return 0;
  }
  return 1;
}
