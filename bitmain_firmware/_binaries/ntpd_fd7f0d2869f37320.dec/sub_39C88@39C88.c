int __fastcall sub_39C88(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  const char *v5; // r2
  unsigned int v6; // r2

  result = 2092;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 )
  {
    switch ( a2 )
    {
      case 1:
        ++*(_DWORD *)(v4 + 780);
        goto LABEL_7;
      case 2:
        ++*(_DWORD *)(v4 + 784);
        goto LABEL_7;
      case 5:
      case 6:
        ++*(_DWORD *)(v4 + 788);
        goto LABEL_7;
      default:
        if ( !a2 )
        {
          if ( !*(_BYTE *)(v4 + 41) )
            return result;
          goto LABEL_5;
        }
LABEL_7:
        v6 = *(unsigned __int8 *)(v4 + 42);
        if ( v6 <= 0xE )
          *(_BYTE *)(v4 + 42) = v6 + 1;
        if ( *(unsigned __int8 *)(v4 + 41) != a2 )
        {
LABEL_5:
          *(_BYTE *)(v4 + 41) = a2;
          v5 = (const char *)sub_6E458(a2);
          return sub_26294(139, a1, v5);
        }
        break;
    }
  }
  return result;
}
