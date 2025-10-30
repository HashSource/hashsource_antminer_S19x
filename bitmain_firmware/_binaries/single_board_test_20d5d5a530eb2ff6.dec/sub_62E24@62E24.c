int sub_62E24()
{
  if ( *(_BYTE *)(dword_223680 + 260)
    && ((!strncmp("F1V19", haystack, 5u) || !strncmp("F1V23", haystack, 5u) || !strncmp("F1V31", haystack, 5u))
     && strstr(haystack, "C2")
     && !strncmp("BS", s2, 2u)
     || !strncmp("F1V23B3C1R", haystack, 0xAu) && sub_37DAC((int)&dword_6E3318) == 4 && !strncmp("AG", s2, 2u)) )
  {
    return 10;
  }
  else
  {
    return 0;
  }
}
