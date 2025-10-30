int __fastcall sub_78B6C(int a1, int a2, unsigned int a3)
{
  unsigned int v3; // r6
  int *v4; // r5
  int v5; // r3
  unsigned __int8 *v6; // r4
  int v7; // lr
  int v8; // r8
  int v9; // r7
  int v11[3]; // [sp+4h] [bp-Ch] BYREF

  v3 = 0;
  v4 = v11;
  memset(v11, 0, sizeof(v11));
  if ( !a3 )
    goto LABEL_7;
LABEL_2:
  while ( 2 )
  {
    v5 = 0;
    v6 = (unsigned __int8 *)(a2 + v3);
    v7 = 1;
    if ( a3 > v3 )
    {
      do
      {
        v8 = *v6;
        v9 = *v4;
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            *v4 = v9 | (v8 << 16);
          }
          else if ( v5 == 2 )
          {
            *v4 = v9 | (v8 << 8);
          }
          else
          {
            *v4 = v9 | v8;
            if ( v7 == 4 )
            {
              v3 += 4;
              ++v4;
              if ( v3 >= a3 )
                goto LABEL_7;
              goto LABEL_2;
            }
          }
        }
        else
        {
          *v4 = v9 | (v8 << 24);
        }
        ++v5;
        ++v7;
        ++v6;
      }
      while ( a3 > v3 + v5 );
    }
    v3 += 4;
    ++v4;
    if ( v3 < a3 )
      continue;
    break;
  }
LABEL_7:
  sub_719F0(v11, a1);
  return 0;
}
