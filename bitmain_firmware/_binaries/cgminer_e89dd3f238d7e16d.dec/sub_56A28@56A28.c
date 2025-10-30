int __fastcall sub_56A28(int a1, unsigned int a2, int *a3)
{
  int v4; // r3
  int v5; // r3
  unsigned __int8 v7; // [sp+12h] [bp-1Ah]
  unsigned __int8 v8; // [sp+12h] [bp-1Ah]
  unsigned __int8 v9; // [sp+13h] [bp-19h]
  unsigned __int8 v10; // [sp+13h] [bp-19h]
  int v11; // [sp+14h] [bp-18h]
  int v12; // [sp+14h] [bp-18h]
  int v13; // [sp+18h] [bp-14h]
  int v14; // [sp+18h] [bp-14h]
  int v15; // [sp+1Ch] [bp-10h]
  int v16; // [sp+1Ch] [bp-10h]
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  if ( a2 > 2 )
  {
    v18 = -1;
    v15 = 0;
    v11 = 1;
    v13 = 1;
    while ( a2 > v15 + v13 )
    {
      v9 = *(_BYTE *)(a1 + v15 + v13);
      v7 = *(_BYTE *)(a1 + v18 + v13);
      if ( v9 >= (unsigned int)v7 )
      {
        if ( v9 == v7 )
        {
          if ( v13 == v11 )
          {
            v15 += v11;
            v13 = 1;
          }
          else
          {
            ++v13;
          }
        }
        else
        {
          v4 = v15++;
          v18 = v4;
          v11 = 1;
          v13 = 1;
        }
      }
      else
      {
        v15 += v13;
        v13 = 1;
        v11 = v15 - v18;
      }
    }
    *a3 = v11;
    v17 = -1;
    v16 = 0;
    v12 = 1;
    v14 = 1;
    while ( a2 > v16 + v14 )
    {
      v10 = *(_BYTE *)(a1 + v16 + v14);
      v8 = *(_BYTE *)(a1 + v17 + v14);
      if ( v8 >= (unsigned int)v10 )
      {
        if ( v10 == v8 )
        {
          if ( v14 == v12 )
          {
            v16 += v12;
            v14 = 1;
          }
          else
          {
            ++v14;
          }
        }
        else
        {
          v5 = v16++;
          v17 = v5;
          v12 = 1;
          v14 = 1;
        }
      }
      else
      {
        v16 += v14;
        v14 = 1;
        v12 = v16 - v17;
      }
    }
    if ( v17 + 1 >= (unsigned int)(v18 + 1) )
    {
      *a3 = v12;
      return v17 + 1;
    }
    else
    {
      return v18 + 1;
    }
  }
  else
  {
    *a3 = 1;
    return a2 - 1;
  }
}
