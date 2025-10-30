void __fastcall sub_6E5DC(void **a1)
{
  char *v2; // r3
  void *v3; // r12
  _DWORD *v4; // r1
  unsigned int i; // r5
  int v6; // r0
  int v7; // r3

  if ( a1 )
  {
    v2 = (char *)*a1;
    if ( *a1 )
    {
      if ( v2 == (char *)1 )
      {
        v3 = a1[3];
        v4 = a1[4];
        if ( v3 )
        {
          for ( i = 0; i < (unsigned int)v3; ++i )
          {
            v6 = v4[i];
            if ( v6 )
            {
              v7 = *(_DWORD *)(v6 + 4);
              if ( v7 != -1 )
              {
                *(_DWORD *)(v6 + 4) = v7 - 1;
                if ( v7 == 1 )
                {
                  sub_6E5DC(v6);
                  v4 = a1[4];
                  v3 = a1[3];
                }
              }
            }
          }
        }
        sub_6D518(v4);
        sub_6D518(a1);
      }
      else if ( v2 == (char *)2 )
      {
        sub_6D518(a1[2]);
        sub_6D518(a1);
      }
      else if ( (unsigned int)(v2 - 3) <= 1 )
      {
        sub_6D518(a1);
      }
    }
    else
    {
      sub_6B910((int)(a1 + 2));
      sub_6D518(a1);
    }
  }
}
