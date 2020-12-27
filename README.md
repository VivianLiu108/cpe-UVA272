# UVA272
The double-quote (") characters should be replaced appropriately by either \`\` if the " opens a quotation and by '' if the " closes a quotation.  
the first " in each pair is replaced by two ` characters: ``  
the second " in each pair is replaced by two ' characters: ''  
  
ex.  
input:  
"To be or not to be," quoth the Bard, "that is the question".  
The programming contestant replied: "I must disagree.  
To \`C' or not to \`C', that is The Question!"   
output:  
\`\`To be or not to be,'' quoth the Bard, \`\`that is the question''.  
The programming contestant replied: \`\`I must disagree.  
To \`C' or not to \`C', that is The Question!''  
