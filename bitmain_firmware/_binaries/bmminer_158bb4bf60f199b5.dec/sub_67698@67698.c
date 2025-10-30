int __fastcall sub_67698(int a1, int a2)
{
  int v2; // r4
  char v5[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(v5, "bad param\n");
    sub_47AB4(0, v5, 0);
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      sub_6688C(19, (_DWORD *)a2);
      *(_DWORD *)a2 = *(unsigned __int16 *)(a2 + 2);
    }
    else
    {
      return -5;
    }
  }
  return v2;
}
