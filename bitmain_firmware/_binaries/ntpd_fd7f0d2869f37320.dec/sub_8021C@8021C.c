int __fastcall sub_8021C(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r1

  v2 = *(_DWORD *)(a1 + 100);
  v3 = *(_DWORD *)(a1 + 68);
  fwrite("        case \"${OPT_CODE}\" in\n", 1u, 0x1Eu, stdout);
  if ( v2 > 0 )
  {
    do
    {
      if ( (*(_DWORD *)(v3 + 16) & 0x280000) == 0 )
      {
        v4 = *(unsigned __int16 *)(v3 + 2);
        if ( (unsigned __int8)v4 <= 0x7Fu && (dword_A0784[(unsigned __int8)v4] & 0x4000) != 0 )
        {
          printf("        '%c' )\n", v4);
          sub_7FFA8((const char **)(a1 + 32), v3);
        }
      }
      --v2;
      v3 += 64;
    }
    while ( v2 );
  }
  return printf(
           "        * )\n"
           "            echo Unknown %s: \"${OPT_CODE}\" >&2\n"
           "            echo \"$%s_USAGE_TEXT\" >&2\n"
           "            exit 1\n"
           "            ;;\n"
           "        esac\n",
           "flag",
           *(const char **)(a1 + 32));
}
