int __fastcall sub_13FEB0(int **a1)
{
  int v3; // r5
  int *v4; // r0
  int *v5; // r6

  if ( sub_B82E0(a1[3]) != 2 )
    return 0;
  if ( sub_B8354(a1[2], bignum_ffdhe2048_p) )
  {
    if ( sub_B8354(a1[2], bignum_ffdhe3072_p) )
    {
      if ( sub_B8354(a1[2], bignum_ffdhe4096_p) )
      {
        if ( sub_B8354(a1[2], bignum_ffdhe6144_p) )
        {
          v3 = 1130;
          if ( sub_B8354(a1[2], bignum_ffdhe8192_p) )
            return 0;
        }
        else
        {
          v3 = 1129;
        }
      }
      else
      {
        v3 = 1128;
      }
    }
    else
    {
      v3 = 1127;
    }
  }
  else
  {
    v3 = 1126;
  }
  if ( !a1[9] )
    return v3;
  v4 = (int *)sub_B8A2C((int)a1[2]);
  v5 = v4;
  if ( !v4 || !sub_BA324((int)v4, v4) || !sub_B8354(a1[9], v5) )
    v3 = 0;
  sub_B895C((int)v5);
  return v3;
}
