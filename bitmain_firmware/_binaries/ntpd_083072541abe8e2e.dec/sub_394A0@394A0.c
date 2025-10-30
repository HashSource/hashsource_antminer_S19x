__int16 *__fastcall sub_394A0(__int16 *result, int a2)
{
  int v2; // r2
  int v3; // r5
  const char *v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r3

  v2 = *((_DWORD *)result + 21);
  if ( v2 )
  {
    v3 = (int)result;
    switch ( a2 )
    {
      case 1:
        ++*(_DWORD *)(v2 + 780);
        goto LABEL_9;
      case 2:
        ++*(_DWORD *)(v2 + 784);
        v6 = *(unsigned __int8 *)(v2 + 42);
        if ( v6 <= 0xE )
          *(_BYTE *)(v2 + 42) = v6 + 1;
        goto LABEL_6;
      case 5:
      case 6:
        ++*(_DWORD *)(v2 + 788);
        goto LABEL_5;
      default:
LABEL_5:
        if ( a2 )
        {
LABEL_9:
          v5 = *(unsigned __int8 *)(v2 + 42);
          if ( v5 <= 0xE )
            *(_BYTE *)(v2 + 42) = v5 + 1;
        }
LABEL_6:
        if ( *(unsigned __int8 *)(v2 + 41) != a2 )
        {
          *(_BYTE *)(v2 + 41) = a2;
          v4 = (const char *)sub_6D480(a2);
          result = sub_25EE0((__int16 *)((char *)&dword_88 + 3), v3, v4);
        }
        break;
    }
  }
  return result;
}
