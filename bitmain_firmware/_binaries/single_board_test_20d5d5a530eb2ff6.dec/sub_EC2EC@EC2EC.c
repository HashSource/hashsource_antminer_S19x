int __fastcall sub_EC2EC(char **a1)
{
  int v2; // r5
  char *v3; // r0
  char **v4; // r4
  char *v5; // r0
  char *v6; // t1
  int v7; // r4
  char **v9; // r0

  v2 = sub_10BFCC(a1);
  if ( v2 )
  {
    if ( a1 )
    {
      v3 = *a1;
      if ( *a1 )
      {
        v4 = a1 + 1;
        do
        {
          v5 = sub_EB100(v3);
          if ( v5 )
          {
            v9 = sub_EAA20((unsigned int)v5);
            if ( v9 )
              sub_10BD3C(v2, v9);
          }
          if ( !v4 )
            break;
          v6 = *v4++;
          v3 = v6;
        }
        while ( v6 );
      }
    }
    v7 = sub_11B8E8(368, 0, v2);
  }
  else
  {
    v7 = 0;
  }
  sub_10BFDC(v2, ASN1_OBJECT_free);
  return v7;
}
