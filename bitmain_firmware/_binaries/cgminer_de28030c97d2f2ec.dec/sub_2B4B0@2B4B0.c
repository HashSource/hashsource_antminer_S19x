int __fastcall sub_2B4B0(pthread_mutex_t *a1)
{
  unsigned __int8 v3; // [sp+Fh] [bp-5h]

  v3 = 0;
  if ( a1[27].__size[9] )
    sub_29EF4(a1);
  if ( (unsigned __int8)sub_29FCC(a1) == 1
    && (unsigned __int8)sub_2A5C4(a1) == 1
    && (!a1[24].__size[4] || (unsigned __int8)sub_27060(a1) == 1)
    && (unsigned __int8)sub_27614(a1) == 1 )
  {
    v3 = 1;
  }
  if ( v3 != 1 )
    sub_35934(a1);
  else
    sub_3F5B4(a1);
  return v3;
}
