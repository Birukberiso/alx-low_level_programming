ar *_strpbrk(char *s, char *accept)
{
	    while (*s)
		        {
				        for (int i = 0; accept[i]; i++)
						        {
								            if (*s == accept[i])
										                {
													                return (s);
															            }
									            }
					        s++;
						    }

	        return (0);
}
