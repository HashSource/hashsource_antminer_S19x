int __fastcall sub_761B0(int a1, int a2, unsigned int a3)
{
  int *v3; // r4
  unsigned int v4; // lr
  int v5; // r3
  int v6; // r12
  int v8; // r5
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v4 = 0;
  v9[0] = 0;
  if ( a3 )
    v3 = v9;
  v9[1] = 0;
  v9[2] = 0;
  if ( !a3 )
    goto LABEL_9;
LABEL_4:
  while ( 2 )
  {
    v5 = 0;
    if ( v4 < a3 )
    {
      do
      {
        v6 = *v3;
        if ( v5 )
        {
          v8 = *(unsigned __int8 *)(a2 + v4 + v5);
          if ( v5 == 1 )
          {
            *v3 = v6 | (v8 << 16);
          }
          else if ( v5 == 2 )
          {
            *v3 = v6 | (v8 << 8);
          }
          else
          {
            *v3 = v8 | v6;
            if ( v5 == 3 )
            {
              v4 += 4;
              ++v3;
              if ( v4 >= a3 )
                goto LABEL_9;
              goto LABEL_4;
            }
          }
        }
        else
        {
          *v3 = v6 | (*(unsigned __int8 *)(a2 + v4) << 24);
        }
        ++v5;
      }
      while ( v4 + v5 < a3 );
    }
    v4 += 4;
    ++v3;
    if ( v4 < a3 )
      continue;
    break;
  }
LABEL_9:
  sub_70808(v9, a1);
  return 0;
}
