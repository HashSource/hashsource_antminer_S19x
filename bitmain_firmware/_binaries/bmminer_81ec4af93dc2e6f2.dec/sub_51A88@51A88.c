int sub_51A88()
{
  int v0; // r6
  int v1; // r4
  int result; // r0
  int v3; // r5
  int v4; // r0
  char *v5; // r4
  int v6; // r0
  int v7; // r11
  void *v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // [sp+10h] [bp-B84h] BYREF
  int v12; // [sp+14h] [bp-B80h] BYREF
  char s[888]; // [sp+18h] [bp-B7Ch] BYREF
  char v14[2048]; // [sp+390h] [bp-804h] BYREF

  v0 = 0;
  v1 = 0;
  memset(s, 0, sizeof(s));
  while ( 1 )
  {
    result = sub_266F0(v1);
    if ( result )
      break;
LABEL_7:
    if ( ++v1 == 4 )
    {
      if ( !v0 )
        return result;
LABEL_9:
      v5 = s;
      do
      {
        v6 = (int)v5;
        v5 += 296;
        result = sub_5168C(v6);
      }
      while ( &s[296 * v0] != v5 );
      return result;
    }
  }
  v11 = 0;
  v12 = 0;
  if ( v0 > 2 )
    goto LABEL_9;
  if ( sub_1A2CC(v1, (unsigned __int8)dword_B413C, &v11) || sub_1C1D4(v1, (unsigned __int8)dword_B413C, &v12) )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
    {
LABEL_6:
      v3 = 296 * v0++;
      sub_1CF70(v1, (int)&s[v3]);
      sub_19E58(v1, &s[v3 + 48], 0x30u);
      sub_1A080(v1, &s[v3 + 96], 0x30u);
      v4 = sub_19FE0(v1);
      sprintf(&s[v3 + 144], "%d", v4);
      sub_1A15C(v1, &s[v3 + 192], 0x30u);
      sub_1C730(v1, &s[v3 + 240], 0x30u);
      result = sub_1C684(v1, (int *)&s[v3 + 288]);
      goto LABEL_7;
    }
LABEL_17:
    snprintf(v14, 0x800u, "rule_level[%d]:[%d]", v1, *(_DWORD *)&s[296 * v0 + 292]);
    sub_3AF5C(3, v14, 0, v9);
    goto LABEL_6;
  }
  result = sub_3F38C(v11, v12);
  v7 = result;
  if ( result != -1 )
  {
    v8 = off_AFC24;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v14, 0x800u, "Chain[%d]: Level[L%d] Freq[%d] Voltage[%d]\n", v1, result, v11, v12);
      sub_3AF5C(3, v14, 0, v10);
      v8 = off_AFC24;
    }
    *(_DWORD *)&s[296 * v0 + 292] = v7;
    if ( (unsigned int)v8 <= 3 )
      goto LABEL_6;
    goto LABEL_17;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v14, "Load level err!");
    return sub_3AF5C(3, v14, 0, *(int *)"rr!");
  }
  return result;
}
