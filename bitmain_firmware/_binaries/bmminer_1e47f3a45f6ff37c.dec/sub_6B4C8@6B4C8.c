int __fastcall sub_6B4C8(int (*a1)())
{
  if ( a1 == sub_1C200 )
    return 26;
  if ( (char *)a1 == (char *)&unk_F4240 )
    return 2;
  if ( (double)(int)a1 == 1500000.0 )
    return 1;
  if ( (char *)a1 == (char *)&unk_2DC6C0 )
    return 0;
  if ( (char *)a1 == (char *)&unk_5B8D80 )
    return 3;
  if ( a1 == (int (*)())12000000 )
    return 4;
  if ( a1 == (int (*)())25000000 )
    return 5;
  return (int)a1;
}
