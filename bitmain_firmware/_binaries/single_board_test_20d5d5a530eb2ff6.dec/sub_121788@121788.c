int __fastcall sub_121788(_BYTE *a1, int a2)
{
  char v5; // r3
  char v6; // r2
  char v7; // r1
  char v8; // r6
  unsigned int v9; // [sp+14h] [bp-14h] BYREF
  unsigned int v10; // [sp+18h] [bp-10h] BYREF
  unsigned int v11; // [sp+1Ch] [bp-Ch] BYREF
  unsigned int v12; // [sp+20h] [bp-8h] BYREF
  int v13; // [sp+24h] [bp-4h] BYREF

  if ( _isoc99_sscanf(a2, "%d.%d.%d.%d%n", &v9, &v10, &v11, &v12, &v13) == 4 )
  {
    v5 = v9;
    if ( v9 <= 0xFF )
    {
      v6 = v10;
      if ( v10 <= 0xFF )
      {
        v7 = v11;
        if ( v11 <= 0xFF )
        {
          v8 = v12;
          if ( v12 <= 0xFF )
          {
            if ( !*(_BYTE *)(a2 + v13) )
            {
LABEL_9:
              *a1 = v5;
              a1[1] = v6;
              a1[2] = v7;
              a1[3] = v8;
              return 1;
            }
            if ( sub_BDB10(*(unsigned __int8 *)(a2 + v13), 8) )
            {
              v5 = v9;
              v6 = v10;
              v7 = v11;
              v8 = v12;
              goto LABEL_9;
            }
          }
        }
      }
    }
  }
  return 0;
}
