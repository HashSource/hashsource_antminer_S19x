int __fastcall sub_17AF8(int result)
{
  int v1; // r10
  int i; // r4
  int v3; // r5
  unsigned int v4; // r3
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  for ( i = 0; i != 256; ++i )
  {
    while ( 1 )
    {
      v3 = i & 0xF;
      v4 = dword_9E31C;
      if ( (i & 0xF) != 0 )
        break;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(v5, 0x800u, "0x%04X ", i);
        result = sub_47EC8(3, v5, i & 0xF);
        v4 = dword_9E31C;
      }
LABEL_4:
      if ( v4 > 3 )
        goto LABEL_10;
LABEL_5:
      if ( ++i == 256 )
        return result;
    }
    if ( v3 != 8 )
      goto LABEL_4;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_5;
    strcpy(v5, "  ");
    result = sub_47EC8(3, v5, 0);
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_5;
LABEL_10:
    snprintf(v5, 0x800u, "%02X ", *(unsigned __int8 *)(v1 + i));
    result = sub_47EC8(3, v5, 0);
    if ( v3 != 15 || (unsigned int)dword_9E31C <= 3 )
      goto LABEL_5;
    strcpy(v5, "\n");
    result = sub_47EC8(3, v5, 0);
  }
  return result;
}
